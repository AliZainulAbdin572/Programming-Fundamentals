#include <iostream>
using namespace std;
int main(){
	
	int password;
	int correctpassword=12345;	
do{	

		cout<<"Enter Your Password : ";
		cin>>password;
	
	if(password!=correctpassword){
		cout<<"Incorrect Password! Please Try Again."<<endl;
	}
	
}while(password!=correctpassword);
	
	cout<<"Welcome! You Have Entered The Correct Password."<<endl;
	
	return 0;
}
