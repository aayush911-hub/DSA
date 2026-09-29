#include<iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int age;
    string Roll_no;
    bool is_enrolled=false;

public:
    Student(string n,int a, string R_n, bool en= false) {
        name=n;
        age=a;
        Roll_no=R_n;
        is_enrolled=en;
    }

    void display() {
        cout<<"Displaying the Info:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<Roll_no<<endl;
        if (is_enrolled) {
            cout<<name<<" is enrolled in the current course."<<endl;
        } else {
            cout<<name<<" is not enrolled in any course."<<endl;
        }
    }
};

int main() {
    Student s1("Aayush Ojha", 20, "BTCD24O1002", true);
    s1.display();

    return 0;
}