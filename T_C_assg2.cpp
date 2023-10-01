#include<bits/stdc++.h>
using namespace std;
    // C++ Assignments | Time and space complexity analysis - 2 | Week 8

int main(){
    int n;
// Calculate the time complexity for the following code snippet.
for(int i = 0; i < n; i++) {
for(int j = 0; j * j < n; j++) {
cout <<"code";
}
}

//  T.C=O(n^3/2)

// Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 1; j < n; j *= 2) {
c++;
}
}
//  T.C=O(n(log(n)))

// Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = 0; i < n; i++) {
for(int j = 1; j * j < n; j *= 2) {
c++;
}
}
//  T.C=O(n((1/2)log(n)))= O(n(log(n)))

// Calculate the time complexity for the following code snippet.
int c = 0;
for(int i = n; i > 0; i /= 2) {
for(int j = 0; j < i; j ++) {
c++;
}
}
//  T.C=O(n)

// Calculate the time complexity for the following code snippet.

int c = 0;
for(int i = 1; i < n; i*=2) {
for(int j = n; j > i; j--) {
c++;
}
}
//  T.C=O(n(log(n)))

    return 0 ;
}