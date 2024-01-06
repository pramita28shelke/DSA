#include<bits/stdc++.h>
using namespace std;
// C++ Assignments | Recursion - 1 | Week 11

// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
// steps at each level.
int findway(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return findway(n-1)+findway(n-2)+findway(n-3);
}
int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    cout<<findway(n);
    
    return 0 ;
}