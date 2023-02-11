//WAP to find Area of a circle 
#include<iostream>
using namespace std;
void radius(int r){
	if(r < 0)
		cout<< "Invalid ";
	else if(r == 0)
		cout<<"Area of circle is "<<r;
	else
		cout<<3.14*r*r;
}

int main(){
	int r;
	cout<<"Enter the radius";
	cin>>r;
	radius(r);
}