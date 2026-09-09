#include<iostream>
#include<vector>
using namespace std;

/* push_back(value), pop_back(), vec_name.size(), vec_name.at(), vec_name.front(), vec_name.back() */
void vec_funcs() {
    vector<int> vec;
    vector<int> vec1(5,0);
    for (int i : vec1) {
        cout<<i<<"\t";
    }cout<<endl;
    cout<<"Size: "<<vec1.size()<<endl;
    vec.push_back(25);
    vec.push_back(89);
    vec.push_back(57);
    cout<<"Size: "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"Size: "<<vec.size()<<endl;
    for (int i : vec) {
        cout<<i<<"\t";
    }cout<<endl;

    cout<<vec.front()<<endl;;
    cout<<vec.back()<<endl;
    cout<<vec.at(1);
}

/*
 * static memory allocation:
        1.Arrays use it.
        2.Allocation at the compilation time.
        3.Values stored in a stack.

 * dynamic memory allocation:
        1.Vectors use it.
        2.Allocation at the run time.
        3.Values stored in a heap.
        * if memory is full while the memory allocation,
          the size of the array is increased by doubling
          the current size
 */

// int main() {
//     vector<int> vec;
//     vec.push_back(56);
//     vec.push_back(86);
//     vec.push_back(66);
//     cout<<vec.size()<<endl;
//     cout<<vec.capacity()<<endl;
//     vec.push_back(66);
//     vec.push_back(66);
//     cout<<vec.capacity();
//     return 0;
// }

char findTheDifference(string s, string t) {
    char ans;
    for (int i=0; i<t.size(); i++) {
        bool is_duplicate= false;
        for (int j=0; j<s.size(); j++) {
            if ((t[i]^s[j])==0) {
                is_duplicate=true;
                break;
            }
        }
        if (is_duplicate==0) {
            ans=t[i];
            return ans;
        }
    }
}

int main() {
    string s = "abcd", t = "abcde";
    char value= findTheDifference(s,t);
    cout<<value;
    return 0;
}