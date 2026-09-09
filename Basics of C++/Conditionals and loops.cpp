#include <iostream>
using namespace std;
/** If the no. is positive of negative **/
// int main() {
//     int n;
//     cout<<"Enter your number: ";cin>>n;
//     if(n>=0) {
//         cout<<"Your integer is Positive.";
//     }
//     else {
//         cout<<"Your integer is Negative";
//     }
//     return 0;
// }

/** Grading of marks **/
// int main() {
//     int marks;
//     cout<<"Enter your marks: ";cin>>marks;
//     while (marks>100) {
//         cout<<"Enter your marks under 100: ";cin>>marks;
//     }
//
//     if (marks>=90) {
//         cout<<"You have A grade.";
//     }else if (marks>=80 && marks<90){
//         cout<<"You have B grade.";
//     }else {
//         cout<<"You have B grade.";
//     }
//     return 0;
// }

/** Finding if the character is Uppercase or Lowercase **/
// int main() {
//     char alph;
//     cout<<"Enter a Character: ";cin>>alph;
//
//     // if (alph>='a' && alph<='z') {
//     //     cout<<"Entered character is Lowercase.";
//     // }else {
//     //     cout<<"Entered character is Uppercase.";
//     // }
//     /* "A" -> 65 ASCII value , "Z" -> 90 ASCII value */
//     if (alph>=65 && alph<=90) {
//         cout<<"Entered character is Uppercase.";
//     }else {
//         cout<<"Entered character is Lowercase.";
//     }
//     return 0;
// }

/** Ternary Statement **/
// int main() {
//     int n;
//     cout<<"Enter an Integer: ";cin>>n;
//     cout<< (n>=0 ? "positive" : "negative"); // if else into a one liner
//     return 0;
// }

/** Loops -> while, for, do-while **/
// int main() {
//     int count=0;
//
//     // while (count<10) {
//     //     cout<<count<<" ";
//     //     count++;
//     // }
//
//     // for (int i=0; i<10; i++) {
//     //     if (i==3) {
//     //         continue;
//     //     }
//     //     cout<<i<<" ";
//     //     if (i==5) {
//     //         break;
//     //     }
//     // }
//
//     // do {
//     //     cout<<count<<" ";
//     //     count++;
//     // } while (count <= 5);
//
//     return 0;
// }

/** Checking whether the no. is prime or not **/
// #include <math.h>
// int main() {
//     int n;
//     bool isPrime = true;
//     cout<<"Enter the no:";cin>>n;
//     // for(int i=2;i<=(n-1);i++) {
//     //     if (n%i==0) {
//     //         isPrime = false;
//     //         break;
//     //     }
//     // }
//
//     for(int i=2;i<=sqrt(n);i++) {
//         if (n%i==0) {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime==1) {
//         cout<<"Entered integer "<<n<<" is a prime no.";
//     }else {
//         cout<<"Entered integer "<<n<<" is not a prime no.";
//     }
//     return 0;
// }

int main() {
    int n;
    cout<<"Number of stars you want: ";cin>>n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}