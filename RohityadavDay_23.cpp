// Write a program to Replace all 0’s with 1 in a given integer 

#include<iostream>
using namespace std;
int main(){
	int num,rem,newnum=0;
	cout << "Enter the number ";
	cin>>num;
	while(num>0){
		rem= num%10;
		if(rem == 0){
			rem = 1;
		}
	num=num/10;
	newnum=newnum*10+rem;
	}
	num=0;
	while(newnum>0){
		int n=newnum%10;
		 num=num*10+n;
		 newnum=newnum/10;
	}
	cout<<num;
}