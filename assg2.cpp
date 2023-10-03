#include<iostream>
using namespace std;

int main(){
//     If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.
// Input 1: A = 23 , B = 34 , C = 71
   int a,b,c;
   cout<<"enter the student marks : "<<endl;
   cin>>a>>b>>c;
   if(a<b){
    if(a<c){
        cout<<a<<" is  "<<" least marks"<<endl;
    }
    else{
        cout<<c<<" is  "<<" least marks"<<endl;
    }
   }
   else{ //b<a
    if(b<c){
        cout<<b<<" is  "<<" least marks"<<endl;
        
    }
    else{  //b<a<c
        cout<<c<<" is  "<<" least marks"<<endl;
    }
   }
//    Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.
// Input : side1 = 5 side2 = 4 side3 = 4
int s1,s2,s3;
cout<<"enter the sides of triangle :"<<endl;
cin>>s1>>s2>>s3;
if((s1==s2)&&(s2==s3)){
    cout<<"Equilateral Triangle"<<endl;
}
else if ((s1==s2)||(s1==s3)|| (s2==s3) ){
    cout<<"Isosceles Trianle "<<endl;
}
else{
    cout<<"Scalene Triangle "<<endl;
}
// 
// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
// Input 1: 2 0
// Output 1: the point lies on the x - axis.
int x,y;
cout<<"enter the coordinates of x and y :"<<endl;
cin>>x>>y;
if((x==0)&&(y==0)){
    cout<<" lies on origin"<<endl;
}
else if ((x==0)){
    cout<<" lies on Y-axis"<<endl;
}
else{
    cout<<" lies on X-axis"<<endl;
}
// Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three points fall on one straight line.
// Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
// Output 1: All 3 points lie on the same line.
int x1,y1,x2,y2,x3,y3;
cout<<"enter the coordinates of three points : "<<endl;
cout<<"first coord: "<<endl;
cin>>x1>>y1;
cout<<"second coord: "<<endl;
cin>>x2>>y2;
cout<<"third coord: "<<endl;
cin>>x3>>y3;
int a=(x2-x1)/(y2-y1);
int b =(x3-x2)/(y3-y2);
if(a==b){
    cout<<"All 3 points lie on the same line."<<endl;
}
else if((y2==y1)||(y2==y3) ) {
    cout<<"invalid"<<endl;

}
else{
    cout<<"All 3 points  does not lie on the same line."<<endl;
}

// Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.
// Input 1: ch = ‘9’
// Output 1: digit
char ch;
cout<<"enter the character : "<<endl;
cin>>ch;
int a= (int) ch;
// A to Z == 65 to 90
// a to z == 97 to 122

if(( (a>=65)&&(a<=90)) || ((a>=97)&&(a<=122))){
    cout<<"It is Alphabet "<<endl;
    if((a>=65)&&(a<=90)){
        cout<<"Uppercase "<<endl;
    }
    else{
        cout<<"Lowercase "<<endl;
    }
}
else if ((a>=48) &&(a<=57)){
    cout<<"It is Numeric "<<endl;
}
else{
    cout<<"It is special symbols "<<endl;
}

int a = 500, b, c;
if (a >= 400)
b = 300;
c = 200;
cout << "value of b and c are respectively " << b << " and " << c;

// Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input 1: 510
// Output1 : notes of “500” = 1 and notes of “10” = 1
int amt;
cout<<"enter the amount : "<<endl;
cin>>amt;

int n1,n2,n5,n10,n20,n50,n100,n200,n500;
n1=n2=n200=n5=n10=n20=n50=n100=n500=0;

switch(amt>=500){
    case 1: 
    n500+=amt/500;
    amt-= n500*500;
}
switch(amt>=200){
    case 1: 
    n200+=amt/200;
    amt-= n200*200;
}
switch(amt>=100){
    case 1: 
    n100+=amt/100;
    amt-= n100*100;
}
switch(amt>=50){
    case 1: 
    n50+=amt/50;
    amt-= n50*50;
}
switch(amt>=20){
    case 1: 
    n20+=amt/20;
    amt-= n20*20;
}
switch(amt>=10){
    case 1: 
    n10+=amt/10;
    amt-= n10*10;
}
switch(amt>=5){
    case 1: 
    n5+=amt/5;
    amt-= n5*5;
}
switch(amt>=2){
    case 1: 
    n2+=amt/2;
    amt-= n500*2;
}

switch(amt>=1){
    case 1: 
    n1+=amt/1;
    amt-= n1*1;
}
cout<<"no of note 500 = "<<n500<<endl;
cout<<"no of note 200 = "<<n200<<endl;
cout<<"no of note 100 = "<<n100<<endl;
cout<<"no of note 50 = "<<n50<<endl;
cout<<"no of note 20 = "<<n20<<endl;
cout<<"no of note 10 = "<<n10<<endl;
cout<<"no of note 5 = "<<n5<<endl;
cout<<"no of note 2 = "<<n2<<endl;
cout<<"no of note 1 = "<<n1<<endl;

//assg no 3 == loop

// Print all the odd numbers from 1 to 100.
// Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
int n;
cout<<"enter the number :"<<endl;
cin>>n;
// for (int i = 1; i <=10; i++)
// {
//     cout<<n<<" X "<<i<<" = "<<n*i<<endl;
//     /* code */
// }
// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
//an=a+(n-1)d=4+(n-1)3=1+3n
// Display this GP - 3,12,48,.. upto ‘n’ terms.
int a=3;
for (int i = 1; i <= n; i++)
{    cout<<a<<endl;
a*=4;
    /* code */
}




    return 0 ;
}