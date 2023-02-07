#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,count=0;
	cout<<"Enter the value ";
	cin>>num;
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			count++;
		}
	}
	if(num<=1)
	cout<<num<<" is not a prime number";
	else if(count > 2)
	cout<<num<<" is not a prime number";
	else
	cout<<num<<" is a prime number";
	
return 0;
}