#include <iostream>
using namespace std;
int main(){
	
	double n1,n2,n3;
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	cout<<"Enter third number : ";
	cin>>n3;
	
	if(n1>=n2&&n1>=n3){
		
		cout<<"The largest number is "<<n1<<endl;
		
	}
	
	if(n2>=n1&&n2>=n3){
		
		cout<<"The largest number is "<<n2<<endl;
		
	}
	
	if(n3>=n1&&n3>=n2){
		
		cout<<"The largest number is "<<n3<<endl;
		
	}
	
	return 0;
	
}
