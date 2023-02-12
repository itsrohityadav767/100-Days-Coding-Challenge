// Write a program to calculate Maximum number of handshakes 

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ener the number ";
	cin>>n;
	int sum=0;
for(int i=n-1;i>0;i--){
	sum=sum+i;
}
cout<<sum;
return 0;
}