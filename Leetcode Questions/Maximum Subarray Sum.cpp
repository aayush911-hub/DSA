#include <iostream>
using namespace std;

/** Brute force method O(n^2) **/
// int main() {
//     int arr[]= {1,2,3,4,5};
//     int sum=INT_MIN;
//     int size=sizeof(arr)/sizeof(int);
//     for (int i=0;  i<size; i++) {
//         int sub_sum=INT_MIN;
//         if (sub_sum<arr[i]) {
//             sub_sum=arr[i];
//         }
//         for (int j=i+1; j<size; j++) {
//             sub_sum+=arr[j];
//
//             if (sum<sub_sum) {
//                 sum=sub_sum;
//             }
//         }
//     }
//     cout<<sum;
//     return 0;
// }


/** Optimized Algorithm - Kadane's Algorithm O(n) **/

int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int curr_sum=0, prev_sum=INT_MIN;
    for (int i=0; i<size; i++) {
        curr_sum+=arr[i];
        if (prev_sum<curr_sum) {
            prev_sum=curr_sum;
        }
        if (curr_sum<0) {
            curr_sum=0;
        }
    }
    cout<<prev_sum;
    return 0;
}