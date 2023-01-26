//Write a program to find the Quadrants in which coordinates lie

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
     if(a > 0 && b > 0)
     cout<<"1st Quadrant";
     
     else if(a < 0 && b > 0)
     cout<<"2nd Quadrants";
     
     else if(a < 0 && b < 0)
     cout<<"3rd Quadrant";
     
     else{
     	cout<<"4th Quadrant";
	 }
	 
	return 0;
}