#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    string name;
    int Roll_no;
    float CGPA;
    string enrolled_courses[5];
public:
    Student(){
        cout << "you are in default constructor" << endl;
        name = "unknown";
        Roll_no = 0;
        CGPA = 0.0;
        string enrolled_courses[] = {"english", "maths", "focp", "beee", "egd"};
    }
    Student(string n, int r, float p, string courses[]){
        cout << "you are in parameterized constructor" << endl;
        name = n;
        Roll_no = r;
        CGPA = p;
        for (int i = 0; i < 5; i++){
            enrolled_courses[i] = courses[i];
        }
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << Roll_no << endl;
        cout << "CGPA: " << CGPA << endl;
        cout << "Enrolled Courses: ";
        for (int i = 0; i < 5; i++){
            cout << enrolled_courses[i] << " ";
        }
        cout << endl;
    }
    void add_course(int n,string course){
        if(n<5){
            enrolled_courses[n]=course;
            n++;
            cout<<"Course"<<course<<"added successfully"<<endl;
        }
        else{
            cout<<"cannot add more than 5 courses"<<endl;
        }
    }
};

int main(){
    Student s;
    string courses[]={"english","focp","maths"};
    Student s1("Akash",12,7.8,courses);
    s.display();
    // string new_course={"hindi","sst"};
    // s1.add_course(2,new_course);
    s1.display();

    return 0;
}