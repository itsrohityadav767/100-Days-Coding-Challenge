#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"enter the character to find ";
	cin>>c;
	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
	||c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
		cout<<"vowel";
	}
	else if(c == '0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='7'||c=='8'||c=='9'){
		cout<<"Default";
	}
	else
	cout<<"Consonant";
	
	return 0;
	
}