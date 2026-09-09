#include <iostream>
using namespace std;
// int main() {
//     int n;
//     // char ch='A';
//     // int a=1;
//     cout<<"Enter the No. of rows you want:";cin>>n;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n;j++) {
//             if (j>=i) {
//                 cout<<i+1;
//             }else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cout<<"Enter the No. of rows you want:";cin>>n;
//     for (int i=1;i<=n;i++) {
//         int a=1;
//         for (int j=1;j<=n;j++) {
//             if (j>=(n-i+1)) {
//                 cout<<a;
//                 a++;
//             }else {
//                 cout<<" ";
//             }
//         }
//         a-=2;
//         for (int j=1;a>0;j++) {
//             cout<<a;
//             a--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main() {
    int n;
    cout<<"Enter the No. of Rows:";cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (j==(n-i-1)) {
                cout<<"* ";
            }else {
                cout<<"  ";
            }
        }
        for (int j=0;j<n;j++) {
            if (j==(i-1)) {
                cout<<"* ";
            }else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n;j++) {
            if (j==(i+1)) {
                cout<<"* ";
            }else {
                cout<<"  ";
            }
        }
        for (int j=0;j<n-1;j++) {
            if (j==(n-3-i)) {
                cout<<"* ";
            }else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}