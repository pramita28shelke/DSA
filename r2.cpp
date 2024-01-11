#include<bits/stdc++.h>
using namespace std;
//calculate the reverse number using recursion 
    int ans=0;//global variable

int reverseNo(int n){
    if(n<=0) return ans;
    int dig=n%10;
    ans=ans*10+dig;
    return reverseNo(n/10);
}

int main(){
    cout<<"enter the number  :"<<endl;
    int n;
    cin>>n;
    cout<<reverseNo(n);
    return 0 ;
}