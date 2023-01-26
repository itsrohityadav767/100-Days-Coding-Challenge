//Write a program to find Number of days in a given month of a given year?


#include<iostream>
using namespace std;
int main(){
	int year,month;
	
	cout<<" enter the year "<<endl;
	cin>>year;
	
	cout<<" enter the month ";
	cin>>month;
	
	if(month==2){
		if((year%400==0) || (year%4==0 && year%100!=0)){
			cout<<" 29 Days ";
		}
		else
		cout<<" 28 Days ";
	}
	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
	||month == 10 || month==12)	{
		cout<<" 31 Days ";
	}
	else{
		cout<<" 30 Days ";
	}
	
}