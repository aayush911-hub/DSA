#include<iostream>
using namespace std;

// int main() {
//     cout<<"How many Values are you going to enter:";
//     int val;cin>>val;
//     int arr[val];cout<<"Enter your Values:"<<endl;
//     for (int i=0; i<val;i++) {
//         cout<<i<<": ";cin>>arr[i];
//     }
//     int smallest=INT_MAX;int sm_ind;
//     int largest=INT_MIN;int lr_ind;
//     for (int i=0; i<val; i++) {
//         if (smallest>arr[i]) {
//             smallest=arr[i];
//             sm_ind=i;
//         }if (largest<arr[i]){
//             largest=arr[i];
//             lr_ind=i;
//         }
//     }
//     cout<<"Smallest no. index: "<<sm_ind<<"\t"<<"Largest no. index: "<<lr_ind;
//     return 0;
// }


/** Pass by reference **/
// void changeArr(int arr[], int *size) {
//     for (int i=0;i<size;i++) {
//         arr[i]= 2*arr[i];
//     }
// }
//
// int main() {
//     int arr[]={1,2,3};
//     changeArr(arr,3);
//     for (int i=0;i<3;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

/** Linear Search **/
int LinearSearch(int arr[], int target, int size)  {
    for (int i=0;i<size;i++) {
        if (arr[i]==target) {
            return i;
        }
    }
    return -1; //not found
}

// int main() {
//     int arr[]={4,2,7,8,1,2,5}, target=8;
//     int size= sizeof(arr)/sizeof(int);
//     int index= LinearSearch(arr,target,size);
//     cout<<"At the index "<<index<<" our target is found";
//     return 0;
// }


/** Reversing the array **/
int main() {
    int arr[]={4,2,7,8,1,2,5};
    int size=sizeof(arr)/sizeof(int);
    int i=0, j=size-1;
    while (i<j) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
    }
    for (int i =0; i<size;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}