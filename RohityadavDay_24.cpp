//WAP to print pyramid using star.

#include<iostream>
using namespace std;
int main(){
	int num;
	 cout<<" Enter the number ";
	 cin>>num;
	cout<< num;
	
	for(int i=1;i<=num;i++){
		for(int j=i;j<=i;j++){
			cout<<"*";
		}
	}
	return 0;
}