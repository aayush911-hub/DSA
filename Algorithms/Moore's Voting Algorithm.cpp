/** Moore's Voting Algorithm O(n) **/

#include<iostream>
#include <vector>
using namespace std;
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