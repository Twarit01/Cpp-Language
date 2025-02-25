#include <iostream>
#include <string> 
using namespace std;
class Employee{
public:
    int E_id;
    string name;
    int base_salary,travel_allowance,dearness_allowance;
    int monthly,annual;
    void input(){
        cout << "Provide Employ Id";
        cin >> E_id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Base Salary";
        cin>>base_salary;
        cout<<"Dearness Allowance";
        cin>>dearness_allowance;
        cout<<"Travel Allowance";
        cin>>travel_allowance;
    }
    void calculation(){
        monthly=base_salary+dearness_allowance+travel_allowance;
        annual=monthly*12;
    }
    void display(){
        cout << "\nEmp_Id: " <<E_id;
        cout << "\nName: " << name;
        cout << "\nMonthly Salary "<<monthly;
        cout << "\nAnnualy Salary "<<annual;
        cout << endl;
    }
};
int main(){
    Employee e;
    e.input();
    e.calculation();
    e.display();
    return 0;
}
