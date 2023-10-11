
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x ; cout<<"enter target";
    cin>>x;

    vector<int> v; // dynamic array 
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    
    for( int i=0;i<n;i++){
        int q; 
        cin>>q;
        v.push_back(q);
    }cout<<endl;

    for(int i=0;i<=v.size()-2; i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x)   
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
    cout<<"size :"<<v.size()<<endl; // no of element push into the vector
    cout<<"capacity :"<<v.capacity(); // 1 -> 2 -> 4 -> 8 capacity

    return 0 ;
}
// reverser an array
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(6);
    display(v);
    cout<<"reverse"<<endl;
    vector<int> v1(v.size());
    for(int i=0;i<v.size();i++){
       int  j=v.size()-1-i;
       v1[i]=v[j];
       
    }
    display(v1);
    return 0 ;
}
// program to reverse the array without using any extra array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cout<<"enter the size :"<<endl;
    cin>>n;
    for(int j=0;j<n;j++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<"array"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    cout<<"reverse array :"<<endl;
    for(int i=v.size()-1;i>=0;i--){
        
           cout<<v[i]<<" ";
    }
    
    return 0 ;
}*/
//rotate the array by k 
#include<iostream>
#include<vector>
using namespace std;
void reverse(int i,int j, vector<int>& a){
   
    while(i<=j){
        int temp =a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
   return;
}
void display(vector<int>& a){
     for(int s=0;s<a.size();s++){
        cout<<a[s]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n; cout<<"enter the size"<<endl;  // 1 2 3 4  k=2 
    cin>>n;                               // 4 1 2 3
    for(int i=0;i<n;i++){                 // 3 4 1 2 
        int s; 
        cin>>s;
        v.push_back(s);
    }
    display(v);
    int k;
    cout<<"no of rotation : "<<endl;
    cin>>k;
    if(k>n) k=k%n;

    reverse(0,n-k-1,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);
    display(v);

   
    
    return 0 ;
}
