#include<bits/stdc++.h>
using namespace std;
// C++ Assignments | Recursion - 1 | Week 11

// Given a positive integer, return true if it is a power of 2.
bool powerOf2(int n){
    if(n==1) return true;
    if(n%2!=0) return false;
    else{
        return powerOf2(n/2);
    }
}
int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;

    int x= powerOf2(n);
    if(x==0) cout<<"not a power of 2 "<<endl;
    else cout<<"power of 2 "<<endl;
    
    return 0 ;
}