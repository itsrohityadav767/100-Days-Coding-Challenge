
// Write a program to find Number of digits in an integer

#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"enter the value in integer ";
	cin>>n;
	string num= to_string(n);
	cout<<num.size();
	
	return 0;
}