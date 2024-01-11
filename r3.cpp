#include<bits/stdc++.h>
using namespace std;
//print the no of steps to reduce the number to zero
//leetcode question 1342

int numOfSteps(int n){ //by recursion
 if(n==0) return 0;
 if(n%2==0) return 1+numOfSteps(n/2);
 return 1+numOfSteps(n-1);
}
int numof2(int n){ //by using loop
    int cnt=0;
    while(n>0){
        if(n%2==0){
            cnt++;
            n=n/2;
        }
        else {
            cnt++;
            n=n-1;
        }
    }
    return cnt;
}

int main(){
    cout<<"enter the number :"<<endl;
    int n;
    cin>>n;
    cout<<"by using recursion "<<numOfSteps(n)<<endl;
    cout<<"by using loop "<<numof2(n);

    return 0 ;
}