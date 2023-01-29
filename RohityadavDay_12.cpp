//Write a program to find Sum of digits of a number?

#include<iostream>
using namespace std;
int main(){
int n,sum=0,m;    
cout<<"Enter a number ";    
cin>>n;
for(;n>0;n=n/10)   
{    
m=n%10;    
sum=sum+m;   
}    
cout<<"Sum is= "<<sum<<endl;
return 0;  
}