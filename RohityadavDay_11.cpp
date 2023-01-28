// Write a program to find Fibonacci series up to n ?

#include<iostream>
using namespace std;

void fibonacci(int num){
	int a=0;
	int b=1;
	int sum=0;
	
	for(int i=1;i<=num;i++){
		cout<<a<<endl;
		
		sum=a+b;
		a=b;
		b=sum;
	}
}

int main(){
	int n;
	
	cout << "Enter the nth number ";
	cin  >> n;
	
	fibonacci(n);
	return 0;
}