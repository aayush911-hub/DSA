#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/** Brute Force O(n^2) **/
int majority_element(vector<int> &vec) {
    int n= vec.size();

    for (int i : vec) {
        int count= 0;
        for (int j : vec) {
            if (i == j) {
                count++;
            }
        }
        if (count>n/2) {
            return i;
        }
    }
    return -1;
}

/** Optimized Approach O(nlogn) - using sorting **/
int majority_element_optimized(vector<int> &vec) {
    int n= vec.size();
    sort(vec.begin(), vec.end());
    int freq=1, ans=vec[0];
    for (int i=1; i<n; i++) {
        if (vec[i] == vec[i-1]) {
            freq++;
        }
        else {
            freq=1; ans= vec[i];
        }
        if (freq>(n/2)) {
            return ans;
        }
    }
    return -1;
}


/** Moore's Voting Algorithm O(n) **/
int moores_voting(vector<int> &nums) {
    int n= nums.size();
    int freq=0, ans=0;
    for (int i=0; i<n; i++) {
        if (freq==0) {
            ans= nums[i];
        }
        if (nums[i]==ans) {
            freq++;
        }
        else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> nums={2,2,1,1,1,2,2};
    int result= majority_element(nums);
    int result_optimized= majority_element_optimized(nums);
    int result_moore= moores_voting(nums);
    cout<<result<<endl;
    cout<<result_optimized<<endl;
    cout<<result_moore;
    return 0;
}