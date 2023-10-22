// Assignment | Binary search - 1 | Week 10
// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,3,4,4,4,4,5};
    int n=9;
    int x=4;
    int lo=0;
    int hi=n-1;
    bool flag= false;
    while(lo<=hi){
        int mid= lo+ (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                cout<<mid;
                flag=true;
                break;

            }
            else{
                lo=mid+1;
            }
        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else{
            hi=mid-1;

        }
    }
    if(flag==false) cout<<arr[lo];
    return 0 ;
}

// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={0,1,1,1,1,1};
    int n=6;
    int x;
    int lo=0;
    int hi=n-1;
   while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if(arr[mid]==1){
        if(arr[mid-1]!=1){
             x= mid;
             break;
        }
        else{
            hi=mid-1;
        }
    }
    else if(arr[mid]<1){
        lo=mid+1;
    }
    else{
        hi=mid-1;
    }
   }
   cout<<"total no of 1's "<<n-x;
}




// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2
#include<bits/stdc++.h>
using namespace std;

int main(){
     int arr[]={1,2,2,3,3,4,5};
    int n=7;
    int x;
    int lo=0;
    int hi=n-1;
   while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if( (arr[mid] == arr[mid-1]) || (arr[mid] == arr[mid+1]) ){
        cout<<"most repeatedly "<< mid;
        break;
    }

    else if(arr[mid]<1){
        lo=mid+1;
    }
    else{
        hi=mid-1;
    }
   }
   
    return 0 ;
}




// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// int lo=0;
// int hi=n;


// Input 2: n = 45
// Output 2: no

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int lo=0;
    int hi=n;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+ (hi-lo)/2;
        if(mid*mid == n ){
            cout<< n <<" is perfect no"<<endl;
            
            flag=true;
            break;
            
        }
        else if(mid*mid <n ) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<"No";

    
    return 0 ;
}

// You have n coins and you want to build a staircase with these coins. The staircase consists of k
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.
// Example 1:
// Input: n = 5
// Output: 2
// Explanation: Because the 3rd row is incomplete, we return 2.
// Example 2:
// Input: n = 8
// Output: 3
// Explanation: Because the 4th row is incomplete, we return 3.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
  
       int lo=1;
         int hi=n;
         while(lo<=hi){
             long long mid = lo +(hi-lo)/2;
             long long x = mid*(mid+1)/2;
             if(x==n){
cout<<mid; break;
             } 
             else if(x>n) hi=mid-1;
             else lo=mid+1;
         }
           cout<<hi;


    
 
    return 0 ;
}