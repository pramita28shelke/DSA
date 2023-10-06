//array 3 
// Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
using namespace std;

int main(){
      int n;
    cout << "enter the size of array : " << endl;
    cin >> n;
    
    int a[n];
    cout << "enter the elements of array : " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    int x ;
    cout<<"enter : "<< endl;
    cin>>x;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==x){
                    cnt++;
                }
            }
        }
    }
    cout<<"count : "<<cnt<<endl;
    return 0 ;
}