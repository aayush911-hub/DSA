/** Optimized Algorithm - Kadane's Algorithm O(n) **/

#include<iostream>
using namespace std;
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