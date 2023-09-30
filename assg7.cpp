
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=65;k<=(2*i-1)+64;k++){
            cout<<(char)k;
        }
        cout<<endl;

    }
    return 0 ;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k = i+64;k>=65;k--){
            cout<<(char)k;
        }
        for(int l=66;l<=(i-1)+65;l++){
            cout<<(char)l;
        }
        cout<<endl;
    }
    
    return 0 ;
}
#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    for(int i=65;i<=(2*n-1)+64;i++){
        cout<<(char)i;
   }
    cout<<endl;
    for(int i=65;i<=(n-1)+64;i++){
        for(int j=65;j<=(n-i)+64;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
    
    return 0 ;
}