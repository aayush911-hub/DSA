#include <iostream>
using namespace std;
char findTheDifference(string s, string t) {
    int sum_t=0;
    for (int i=0; i<t.size(); i++) {
        sum_t+= t[i];
    }
    int sum_s=0;
    for (int i=0; i<s.size(); i++) {
        sum_s+= s[i];
    }
    char b = sum_t - sum_s;
    return b;
}

int main() {
    string s = "abcd", t = "abcde";
    char unique_value= findTheDifference(s,t);
    cout<<unique_value;
    // string a= "aabbc";
    // int n= a.size();
    // char b;
    // int values=0;
    // for (int i= 0; i<n; i++) {
    //     values=  values^a[i];
    // }
    // b=values;
    // cout<<b;
    return 0;
}