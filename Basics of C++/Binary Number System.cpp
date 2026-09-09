#include <iostream>
using namespace std;

// Decimal to Binary
int main() {
    int dec_num,rem,pow=1,sum=0;
    cout<<"Enter your No.: ";cin>>dec_num;
    if (dec_num>0) {
        while (dec_num>0) {
            rem= dec_num%2;
            dec_num/=2;
            sum+= rem*pow;
            pow*=10;
        }
        cout<<sum;
    }else {
        dec_num*=-1;
        while (dec_num>0) {
            rem= dec_num%2;
            if (rem==0) {
                rem=1;
            }else {
                rem=0;
            }
            dec_num/=2;
            sum+= rem*pow;
            pow*=10;
        }
        sum+=1*pow;
        
    }

    return 0;
}

// int main() {
//     int binary_num, decimal_num=0, pow=1;
//     cout<<"Enter the Binary Number:";cin>>binary_num;
//     while (binary_num>0) {
//         int rem= binary_num%10;
//         binary_num/=10;
//         decimal_num+= rem*pow;
//         pow*=2;
//     }
//     cout<<decimal_num;
//     return 0;
// }

// int main() {
//     int dec_num;
//     cout<<"Enter the Decimal Number:";cin>>dec_num;
//
//     return 0;
// }
