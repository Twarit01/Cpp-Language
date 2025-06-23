#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <map>
#include <ctime>     // For timestamp
#include <cstring>   // For strlen
using namespace std;
// ---------- Base class ----------
class MenuItem {
public:
    int id;
    string name;
    double price;
    double discount;
    int stock; // Stock added

    MenuItem(int i, string n, double p, double d = 0.0, int s = 100)
        : id(i), name(n), price(p), discount(d), stock(s) {}

    virtual void display() const {
        cout << left << setw(5) << id
             << setw(15) << name
             << "Rs. " << fixed << setprecision(2) << setw(8) << price;
        if (discount > 0) {
            cout << "(" << discount << "% off)";
        }
        cout << " (Stock: " << stock << ")";
        cout << endl;
    }

    double getDiscountedPrice() const {
        return price - (price * discount / 100);
    }

    virtual ~MenuItem() {}
};

// ---------- Derived classes ----------
class Snack : public MenuItem {
public:
    Snack(int i, string n, double p, double d = 0.0, int s = 100)
        : MenuItem(i, n, p, d, s) {}

    void display() const override {
        cout << "[Snack]    ";
        MenuItem::display();
    }
};

class Beverage : public MenuItem {
public:
    Beverage(int i, string n, double p, double d = 0.0, int s = 100)
        : MenuItem(i, n, p, d, s) {}

    void display() const override {
        cout << "[Beverage] ";
        MenuItem::display();
    }
};

// ---------- Order class ----------
class Order {
public:
    vector<int> itemIDs;
    vector<int> quantities;

    void addItem(int id, int qty) {
        itemIDs.push_back(id);
        quantities.push_back(qty);
    }

    void printBill(const vector<MenuItem*>& menu) {
        map<int, int> itemMap;
        for (size_t i = 0; i < itemIDs.size(); ++i) {
            itemMap[itemIDs[i]] += quantities[i];
        }

        double total = 0;

        // Timestamp
        time_t now = time(0);
        char* dt = ctime(&now);
        dt[strlen(dt) - 1] = '\0'; // Remove newline

        cout << "\n======================= BILL RECEIPT ======================\n";
        cout << "Time: " << dt << endl;
        cout << left << setw(15) << "Item"
             << setw(10) << "Qty"
             << setw(15) << "Unit Price"
             << setw(15) << "Total"
             << "Note" << endl;
        cout << "-------------------------------------------------------------\n";

        for (const auto& pair : itemMap) {
            int id = pair.first;
            int qty = pair.second;

            for (const auto& item : menu) {
                if (item->id == id) {
                    double price = item->getDiscountedPrice();
                    double cost = price * qty;

                    cout << left << setw(15) << item->name
                         << setw(10) << qty
                         << "Rs. " << right << setw(8) << fixed << setprecision(2) << price
                         << "    Rs. " << right << setw(8) << fixed << setprecision(2) << cost << "   ";

                    if (item->discount > 0)
                        cout << "Discounted";
                    cout << endl;

                    total += cost;
                    break;
                }
            }
        }

        cout << "-------------------------------------------------------------\n";
        cout << right << setw(52) << "TOTAL = Rs. " << fixed << setprecision(2) << total << endl;

        saveToFile(total, dt);  // Save with timestamp
    }

    void saveToFile(double total, const char* timestamp) {
        ofstream out("discount_bill.txt", ios::app);
        if (out.is_open()) {
            out << "==================== New Bill ====================\n";
            out << "Time: " << timestamp << endl;
            out << "Total: Rs. " << fixed << setprecision(2) << total << "\n\n";
            out.close();
        }
    }
};

// ---------- Main Function ----------
int main() {
    vector<MenuItem*> menu;

    // Create menu with stock values
    menu.push_back(new Snack(1, "Samosa", 10, 0.0, 5));
    menu.push_back(new Snack(2, "Sandwich", 30, 0.0, 3));
    menu.push_back(new Beverage(3, "Tea", 15, 10, 8));
    menu.push_back(new Beverage(4, "Coffee", 20, 5, 6));

    // Display menu
    cout << "\n====================== CANTEEN MENU ===========================\n";
    cout << left << setw(5) << "ID"
         << setw(15) << "Item"
         << setw(15) << "Price"
         << "Discount\n";
    cout << "------------------------------------------------------------------\n";

    for (const auto& item : menu) {
        item->display();
    }

    Order myOrder;
    int choice, quantity;

    while (true) {
        cout << "\nEnter item ID to order (0 to finish): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        if (choice == 0) break;

        MenuItem* selectedItem = nullptr;
        for (const auto& item : menu) {
            if (item->id == choice) {
                selectedItem = item;
                break;
            }
        }

        if (!selectedItem) {
            cout << "Error: Invalid item ID. Please enter a valid number.\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        if (cin.fail() || quantity <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid quantity. Try again.\n";
            continue;
        }

        if (selectedItem->stock < quantity) {
            cout << "Only " << selectedItem->stock << " available in stock. Please enter a lower quantity.\n";
            continue;
        }

        selectedItem->stock -= quantity;
        myOrder.addItem(choice, quantity);
    }

    // Print the bill
    myOrder.printBill(menu);

    // Clean up
    for (auto item : menu)
        delete item;

    return 0;
}