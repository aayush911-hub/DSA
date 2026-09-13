#include <iostream>
using namespace std;

/** BINARY EXPONENTIATION
    X^n -> we take the binary value of n (power). Then we loop over each binary value.

    The binary value of a decimal value is atmost to logn+1. (base 2)
        eg: 8 -> 1000
            log8+1 -> 3+1 -> 4
**/
double binary_exponentiation(double x, int n) {
    if (n<0) {
        x=1/x;
        n=-1*n;
    }
    long bin_num= n;
    double ans=1;

    while (bin_num>0) {
        if (bin_num%2==1) {
            ans*=x;
        }
        x*=x;
        bin_num/=2;
    }
    return ans;
}

int main() {
    float x= 2.1000; int n= 3;
    double value= binary_exponentiation(x,n);
    cout<<value;
    return 0;
}