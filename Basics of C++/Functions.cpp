#include<iostream>
using namespace std;
// defining a function
// void helloWorld() {
//     cout<<"Hello World!";
// }
//
// int main() {
//     helloWorld(); // function call
//     return 0;
// }

int sum(int n) {
    int sum=0;
    for (int i=1;i<=n;i++) {
        sum+=i;
    }
    return sum;
}

int factorial(int n) {
    int fac=1;
    for (int i=1;i<=n;i++) {
        fac*=i;
    }
    return fac;
}

int nCr(int n, int r) {
    int fact_n= factorial(n);
    int fact_r= factorial(r);
    int fact_nmr= factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}

int sumOfDigits(int n) {
    int sum=0;
    while (n!=0) {
        int rem = n%10;
        n = n/10;
        sum+=rem;
    }
    return sum;
}
int main() {
    int n;cout<<"Enter your n integer:";cin>>n;
    int r;cout<<"Enter your r integer:";cin>>r;
    // cout<<sum(n);
    // cout<<factorial(n);
    // cout<<sumOfDigits(n);
    cout<<nCr(n,r);
    return 0;
}