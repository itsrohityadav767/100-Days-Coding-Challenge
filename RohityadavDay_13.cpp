
// Write a program to find Sum of N natural numbers?

#include<iostream>
using namespace std;

void sumofnatural(int x){
	
	int ans=x*(x+1)/2;
	cout<<ans;
	
}

int main(){
	int n;
	cout<<"Enter the number ";
	cin>>n;
	sumofnatural(n);
	
	return 0;
}