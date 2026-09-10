/**
    Q. Return pair in sorted array with target sum.
**/

#include<iostream>
using namespace std;

/** Brute Force Approach O(n^2) **/
// int main() {
//     int arr[]={2,7,11,15};
//     int target=9, sum;
//     int size= sizeof(arr)/sizeof(int);
//     for (int i=0; i<size; i++) {
//         for (int j=i+1; j<size; j++) {
//             sum= arr[i]+arr[j];
//             if (sum==target) {
//                 cout<<"The indexes "<<i<<" and "<<j;
//                 cout<<" gives the the target value."<<endl;
//             }
//         }
//     }
//     return 0;
// }


/** Optimized Approach O(n) **/
int main() {
    int arr[]={2,7,11,15};
    int target=26, pair_sum=INT_MIN;
    int size= sizeof(arr)/sizeof(int);
    int i=0, j=size-1;
    while (pair_sum!=target) {
        pair_sum=arr[i]+arr[j];
        if (pair_sum<target) {
            i++;
        }
        if (pair_sum>target) {
            j--;
        }
    }
    cout<<"The indexes "<<i<<" and "<<j;
    cout<<" gives the the target value."<<endl;
    return 0;
}