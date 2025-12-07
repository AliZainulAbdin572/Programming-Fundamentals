#include <iostream>
using namespace std;
int main(){
	
	int age1,age2,age3;
	
	cout<<"Enter your age : ";
	cin>>age1;
	cout<<"Enter your age : ";
	cin>>age2;
	cout<<"Enter your age : ";
	cin>>age3;
	
	string result1= (age1<13)? "Child":(age1<=19)? "Teenager":"Adult";
	cout<<"Age "<<age1<<" falls under the category : "<<result1<<endl;
	
	string result2= (age2<13)? "Child":(age2<=19)? "Teenager":"Adult";
	cout<<"Age "<<age2<<" falls under the category : "<<result2<<endl;
	
	string result3= (age3<13)? "Child":(age3<=19)? "Teenager":"Adult";
	cout<<"Age "<<age3<<" falls under the category : "<<result3<<endl;
	
	return 0;
}
