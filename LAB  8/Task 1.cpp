#include <iostream>
using namespace std;
int main (){
	
	double num1,num2;
	char op;
	cout<<"Enter First Number : ";
	cin>>num1;
	cout<<"Enter Second Number : ";
	cin>>num2;
	cout<<"Choose the Operator From the List(\nA for \"+\"\nB for \"-\"\nC for \"*\"\nD for \"/\") : ";
	cin>>op;
	
	
	switch(op){
		
		case 'A':
		case 'a':
			cout<<"Sum = "<<num1+num2<<endl;
			break;
		case 'B':
		case 'b':
			cout<<"Difference = "<<num1-num2<<endl;
			break;	
		case 'C':
		case 'c':
			cout<<"Product = "<<num1*num2<<endl;
			break;
		case 'D':
		case 'd':
			cout<<"Divide = "<<num1/num2<<endl;
			break;
		default:
			cout<<"Invalid Choice";
			break;
		}

		
	return 0;		
	}
