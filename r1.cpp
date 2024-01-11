#include<bits/stdc++.h>
using namespace std;
// calculate the sum of digit using recursion 

int sumOfdig(int n ){
    if(n>=0 && n<=9) return n;
    
    return((n%10 )+ (sumOfdig(n/10))) ;
}
int main(){
    cout<<sumOfdig(1234);
    return 0 ;
}
