// C++ Assignments | Time and space complexity Analysis - 1 | Week 8
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Calculate the time complexity for the following code snippet.
int c = 0;
int n,k;
for(int i = n; i > 0; i /= 2) {
c++;
}

//  T.C=O(log(n))

// Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = n; i > 1; i /= i) {
c++;
}

//   T.C=O(1)

// Calculate the time complexity for the following code snippet where k is some constant (k<<n).
int c = 0;
for(int i = 0; i < n; i += k) {
c++;
}

//   T.C= O(n/2) =O(n)

// Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 1; i < n; i *= 2) {
c++;
}
//   T.C=O(log(base 2)n)


// Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
c +=i;
}
//   T.C=O(n)



// Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 0; j < i; j++){
c++;
}
}

//   T.C=O((n(n+1))/2)=O(n^2)


    return 0 ;
}
