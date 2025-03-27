// #include <iostream>
// #include <string>
// using namespace std;
// class Student{
// public:
//     int roll_no;
//     string name;
//     float percentage;
//     void input(){
//         cout << "Provide Roll no: ";
//         cin >> roll_no;
//         cin.ignore();
//         cout << "Enter Name: ";
//         getline(cin, name);
//         cout << "Enter percentage: ";
//         cin >> percentage;
//     }
//     void display(){
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Percentage: " << percentage << endl;
//     }
//     void grade(){
//         if (percentage >= 90){
//             cout << "Grade is A+" << endl;
//         }
//         else if (percentage >= 80){
//             cout << "Grade is A" << endl;
//         }
//         else if (percentage >= 70){
//             cout << "Grade is B+" << endl;
//         }
//         else{
//             cout << "Grade is B" << endl;
//         }
//     }
// };
// int main(){
//     student s;
//     s.input();
//     s.display();
//     s.grade();
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Student{
// public:
//     int roll_no;
//     string name;
//     float percentage;
//     Student(){
//         roll_no=11;
//         name="Hello";
//         percentage=87.7;
//     }
// //     void input(){
// //         cout << "Provide Roll no: ";
// //         cin >> roll_no;
// //         cin.ignore();
// //         cout << "Enter Name: ";
// //         getline(cin, name);
// //         cout << "Enter percentage: ";
// //         cin >> percentage;
// //     }
//     void display(){
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Percentage: " << percentage << endl;
//     }
//     void grade(){
//         if (percentage >= 90){
//             cout << "Grade is A+" << endl;
//         }
//         else if (percentage >= 80){
//             cout << "Grade is A" << endl;
//         }
//         else if (percentage >= 70){
//             cout << "Grade is B+" << endl;
//         }
//         else{
//             cout << "Grade is B" << endl;
//         }
//     }
// };
// int main(){
//     Student s;
//     //s.input();
//     s.display();
//     s.grade();
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Student{
// public:
//     int roll_no;
//     string name;
//     float percentage;
//     Student(){
//         cout<<"Default values"<<endl;
//         roll_no=11;
//         name="Hello";
//         percentage=87.7;
//     }
//     Student(string s,int r,int p){
//         cout<<"Parametrized Values"<<endl;
//         roll_no=r;
//         name=s;
//         percentage=p;
//     }
// //     void input(){
// //         cout << "Provide Roll no: ";
// //         cin >> roll_no;
// //         cin.ignore();
// //         cout << "Enter Name: ";
// //         getline(cin, name);
// //         cout << "Enter percentage: ";
// //         cin >> percentage;
// //     }
//     void display(){
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Percentage: " << percentage << endl;
//     }
//     void grade(){
//         if (percentage >= 90){
//             cout << "Grade is A+" << endl;
//         }
//         else if (percentage >= 80){
//             cout << "Grade is A" << endl;
//         }
//         else if (percentage >= 70){
//             cout << "Grade is B+" << endl;
//         }
//         else{
//             cout << "Grade is B" << endl;
//         }
//     }
// };
// int main(){
//     Student s;
//     Student s1("Xebia",12,75);
//     //s.input();
//     s.display();
//     s.grade(); 
//     s1.display();
//     s1.grade();
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
class Student{
public:
    int roll_no;
    string name;
    float percentage;
    Student(){
        cout<<"Default values"<<endl;
        roll_no=11;
        name="Hello";
        percentage=87.7;
    }
    Student(string s,int r,int p){
        cout<<"Parametrized Values"<<endl;
        roll_no=r;
        name=s;
        percentage=p;
    }
//     void input(){
//         cout << "Provide Roll no: ";
//         cin >> roll_no;
//         cin.ignore();
//         cout << "Enter Name: ";
//         getline(cin, name);
//         cout << "Enter percentage: ";
//         cin >> percentage;
//     }
    void display();
    void grade(){
        if (percentage >= 90){
            cout << "Grade is A+" << endl;
        }
        else if (percentage >= 80){
            cout << "Grade is A" << endl;
        }
        else if (percentage >= 70){
            cout << "Grade is B+" << endl;
        }
        else{
            cout << "Grade is B" << endl;
        }
    }
};
void Student::display(){
    cout << "Roll No: " << roll_no << endl;
    cout << "Name: " << name << endl;
    cout << "Percentage: " << percentage << endl;
}
int main(){
    Student s;
    Student s1("Xebia",12,75);
    //s.input();
    s.display();
    s.grade(); 
    s1.display();
    s1.grade();
    return 0;
}