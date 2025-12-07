#include <iostream>
using namespace std;
int main(){
	
	int num1,num2;     //initializing variables.
	cout<<"Enter an integer : ";
	cin>>num1;        //taking input from the user.
	cout<<"Enter an integer : ";	
	cin>>num2;
	
	string result1 = (num1%2==0)? "even":"odd";  //using the ternary or the conditional operator.
	string result2 = (num2%2==0)? "even":"odd";
	
	cout<<"The number "<<num1<<" is "<<result1<<endl; //printing the result with the correct format.
	cout<<"The number "<<num2<<" is "<<result2<<endl;
	
	return 0;
}
