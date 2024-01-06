#include<bits/stdc++.h>
using namespace std;
// C++ Assignments | Recursion - 1 | Week 11
// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
// recursion.
void printSum(int a, int b, int &sum){

if(a>b) return;
if(a==b){
    if(a%2 !=0) sum+=a;
    return;
}
if(a%2 != 0){
    sum=sum+a;
    printSum(a+2,b,sum);
}
else{
    printSum(a+1,b,sum);
}
}

int main(){
    
   int a,b;
   cout<<"enter the values of a and b : "<<endl;
   cin>>a>>b;

   if(a>b ){
    swap(a,b);
   }
   int sum=0;
   printSum(a,b,sum);
   cout<<"the sum of odd numbers between a and b : "<<sum;
    return 0 ;
}


