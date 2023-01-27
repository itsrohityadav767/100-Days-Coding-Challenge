//   Write a program to find Factorial of a number?

#include<iostream>
using namespace std;
void factorial(int num){
int fact = 1;
for(int i = 1;i <= num; i++){
	fact = fact*i;
}
cout<<"Factorial: "<<fact;
}
int main(){
	int num;
	cout << "enter the number to find factorial" << endl;
	cin >> num;
	
	factorial(num);
	
	return 0;
}