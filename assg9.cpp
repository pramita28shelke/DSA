// array -2
// Count the number of elements strictly greater than x.
/*
#include<iostream>
using namespace std;
int greaterx(int a[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++) {
        if(a[i]>x)
        count++;}
    return count ;
}

int main(){
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
    int x;
    cin>>x;
    cout<<"number of element greater than x : "<<endl;
    greaterx(a,n,x);
    cout<<greaterx(a,n,x);
    return 0 ;
}

// WAP to find the largest three elements in the array.
#include<iostream>
#include<climits>
using namespace std;
 int get_max(int a[], int n){
    int max1=INT_MIN, max2=INT_MIN,max3=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max3=max2;

            max2=max1;
             max1=a[i];
        }
        else if(a[i]>max2){
            max3=max2;
            max2=a[i];
        }
        else if(a[i]>max3){
            max3=a[i];
        }
    }
    cout<<"max1 : "<<max1<<endl;
    cout<<"max2 : "<<max2<<endl;
    cout<<"max3 : "<<max3<<endl;


 }
int main(){
    int n; cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
    get_max(a,n);

    return 0 ;
}
// Check if the given array is sorted or not
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     for(int i=0;i<n;i++) {
        if(a[i]<=a[i+1]) continue;
        else{
            cout<<"array is unsorted "<<endl;
            break;
        }
     }


    return 0 ;
}
// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
#include<iostream>
using namespace std;
int diff(int a[],int n){
    int sume=0;int sumo=0;
    for(int i=0;i<n;i++){
        if(i%2==0) sume=sume+a[i];
        else sumo=sumo+a[i];
    }
    int s=sume-sumo;
    return(s);


}
int main(){
    int n; cout<<"enter the size of array : "<,endl;
    cin>>n;
     int a[n];
     cout<<"enter the elements of array : "<<endl;
     for(int i=0;i<n;i++) cin>>a[i];
    cout<<"difference : "<<endl;
   cout<<diff(a,n);
    return 0 ;
}
// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include <iostream>
using namespace std;
int change(int a[],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){              // 1  2  3   4
            a[i]=a[i]+10;        // 11 4  13   8
        }
        else{
            a[i]=2*a[i];
        }
        cout<<a[i]<<" ";
    }

}

int main()
{
    int n;
    cout << "enter the size of array : " << endl;
    cin >> n;
    int a[n];
    cout << "enter the elements of array : " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";

cout<<endl;
    change(a,n);

    return 0;
}
// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
#include <iostream>
using namespace std;

int main()
{
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

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i != j) && (a[i] == a[j]))
            {
                cnt++;
                // cout << a[i] << " ";
            }
        }
        if (cnt == 0)
        {
            cout << a[i] << endl;
            break;
        }
    }

    return 0;
}*/
// If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
using namespace std;

int main(){
     int n;
    cout << "enter the size of array : " << endl;
    cin >> n;
    if(n%2!=0) cout<<"Not palindrome "<<endl;
    int a[n];
    cout << "enter the elements of array : " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    bool flag= false;
    for( int i=0;i<n;i++){
        if(a[i]==a[n-i-1]){
            flag=true;
        }
    }
    if(flag==true) {cout<<"palindrome : "<<endl;}
    else cout<<"not palindrome";

    
    return 0 ;
}
