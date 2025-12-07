#include <iostream>
using namespace std;
int main(){
	
	double ab,wa;
	cout<<"Enter Your Account Balance : ";
	cin>>ab;
	cout<<"Enter the Withdrawal Amount : ";
	cin>>wa;
	
	if(wa<=ab){
		
		double difference = ab-wa;
		cout<<"Remaining Balance : "<<difference<<endl;
		
	}
	else{
		
		cout<<"Insufficient Balance"<<endl;
		
	}	
	
	return 0;
}
