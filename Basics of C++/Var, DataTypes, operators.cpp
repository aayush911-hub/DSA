// """Boilerplate Code"""

// #include <iostream>
// using namespace std;

// int main() {
    // return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     bool age = false;
//     cout<<sizeof(age)<<endl;

    // const char* grade = "A";
    // cout << sizeof(grade)<<endl;
//
//     return 0;
// }

// int    -> 4 bytes    |
// char   -> 1 bytes    |
// float  -> 4 bytes    |-----> PRIMITIVE DATATYPES
// bool   -> 1 bytes    |
// double -> 8 bytes    |

// #include<iostream>
// using namespace std;
// int main() {
//     char name = 'A';
//     int ascii = (int)name; // explicit typecasting
//     cout<<sizeof(ascii);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int age;
//     cout<<"Enter your age: ";
//     cin>>age;
//
//     cout<<"Your age is: "<<age<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5, b= 10;
//     int sum = a+b;
//     cout<<sum;
//     return 0;
// }

// || -> OR
// && -> AND
// !  -> NOT

// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,sum;
//     cout<<"Enter Integer number 1: ";
//     cin>>a;
//     cout<<"Enter Integer number 2: ";
//     cin>>b;
//     sum=a+b;
//     cout<<"Sum of both the numbers: "<<sum;
//     return 0;
// }

// unary operators
#include <iostream>
using namespace std;
int main() {
    int a=10, b;
    b = a++; // b will be assigned with the value of a
            // a will be incremented after the assignment (post increment)
    cout<<b<<endl;
    cout<<a<<endl;

    int c = ++a; // increments 'a' first and then the value is assigned
                // (pre increment)
    cout<<c<<endl;
    cout<<a<<endl;
    return 0;
}