#include <cmath>
#include <iostream>
using namespace std;
int main(){
	int n,rem,sum=0,num=0,original;
		int result;
	cout<<"Enter the number ";
	cin>>n;
	 original=n;
 while (original != 0) {
      original /= 10;
      ++num;
   }
   original=n;
		while(original!=0){
		
		rem=original%10;
	sum+=pow(rem,num);
		
		original=original/10;
	}
	if(sum==n){
		cout<<"Armstrong";
	}
	else{
		cout<<"Invalid";
	}
	
}