#include<iostream>
#include <vector>
using namespace std;
// & -> Tells about the address
// * -> dereferencing to the value at the addresses (Dereferencing Pointer)

// int main() {
//     int a=10;
//     int *p= &a;
//     int **c= &p;
//     cout<<p<<endl;
//     cout<<*c<<endl;
//     cout<<**c;
//     return 0;
// }

void sum(int &a) { // Pass by reference
    a= a*2;
}

int main() {
    int a=10;
    sum(a);
    cout<<a;
    return 0;
}

// Array is a Pointer