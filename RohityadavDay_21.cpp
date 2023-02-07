#include<iostream>
using namespace std;
int main(){
	int original, rev=0,num;
	cout << "Enter the value ";
	cin >> original;
	num = original;
	while(num > 0){
		rev=(rev*10)+num%10;
		num=num/10;
	}
	cout<<rev;
	if(original == rev)
		cout << " palindrome ";
	else
	cout << "Not Palindrome";
	
}