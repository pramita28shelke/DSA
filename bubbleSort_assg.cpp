// C++ Assignments | Bubble Sorting | Week 9

// Which of the following(s) is/are true about bubble sort:
// It is stable sort  = True
// It has a worst case space complexity of O(n) = False
// It involves swapping of adjacent elements = True 
// After each iteration, the greatest element is placed at the end of the array. =True 

// What will the following array look like after one iteration of bubble sort [1,6,2,5,4,3].
// [1,3,2,4,5,6]
// [1,2,3,4,5,6]
// [1,2,5,4,3,6] = correct array after one iteration of bubble sort [1,6,2,5,4,3].
// [1,2,4,5,3,6]

// In which case does bubble sort works in the most efficient way:
// When the array is sorted in increasing order = correct ans 
// When the array is sorted partially
// When the array is sorted in decreasing order.
// When the array is nearly sorted.

// Sort the array in descending order using Bubble Sort.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,3,2,5,6,1,7};
    int n=7;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}

