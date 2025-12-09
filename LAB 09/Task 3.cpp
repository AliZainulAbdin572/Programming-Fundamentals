#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a Positive Number : ";
	cin>>num;
	
	while(num<=0){
		
		cout<<"Error!"<<endl;
		cout<<"Enter A Valid Positive Number : ";
		cin>>num;
	}
	cout<<"The Psitive Number Entered By You is : "<<num<<endl;
	
	
	return 0;
}
