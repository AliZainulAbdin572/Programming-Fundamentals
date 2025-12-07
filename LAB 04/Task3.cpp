#include <iostream>
using namespace std;
int main(){
	
	int b1,l1; //initializing the variables.
	cout<<"Enter your Account Balance : $";
	cin>>b1;
	cout<<"Enter Loyality Status (1 for loyal,0 for not loyal ) : ";
	cin>>l1; //taking input from the user.
	
	//using the ternary operator to show the account status by nesting two conditions
	string result1= (b1<100)? "Low Balance Account": (b1<=500)? "Standard Account":"Premium Account";
	cout<<"Account Type : "<<result1<<endl;
	
	/*using conditional operator along with logical operator "AND" or &&.
	So, when both the conditions are true, the result will be "eligible".
	Otherwise it will be not eligible*/
	string result2= (b1>=200 && l1==1)? "Eligible":"Not eligible";
	cout<<"Special Offer Eligibilty Status : "<<result2<<endl;
	
	return 0;
}
