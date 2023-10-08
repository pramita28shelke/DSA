// C++ Assignments | Selection and insertion sorting | Week 9

// 1. Which of the following is true about selection sort:
// a) In each iteration we find the minimum element in the unsorted part of the array.
// b) In each iteration we find the index of the minimum element in the unsorted part of the array.
// c) We swap the index of the minimum element with the first element of the array.
// d) It takes O(n^2) swaps.

// Solution : All are true

// Which of the following examples represent the worst case input for an insertion sort?
// a) array in sorted order
// b) large array
// c) normal unsorted array
// d) array sorted in reverse order

// Solution : Large array and array sorted in reverse order


// How many passes would be required during insertion sort to sort an array of 5 elements?
// a) 1
// b) Depends on order of elements
// c) 4
// d) 5

// Solution : 4


// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.
#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr="abfbhcdbdch";

    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>=arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.

    return 0 ;
}

