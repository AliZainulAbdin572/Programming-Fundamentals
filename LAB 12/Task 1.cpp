#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int n1;
	cout<<"Enter A Number To Find Its Square Root : ";
	cin>>n1;
	
	//finding the square root of a number.
	double r1= sqrt(n1);
	cout<<"Square Root of "<<n1<<" is : "<<r1<<endl;
	
	//finding the absolute value of a number.
	int r2= abs(n1);
	cout<<"Absolute Value of "<<n1<<" is : "<<r2<<endl;
	
	//finding the sine of a number.
	double r3= sin(n1);
	cout<<"Sine of "<<n1<<" is : "<<r3<<endl;
	
	//finding the cosine of a number.
	double r4= cos(n1);
	cout<<"Cosine of "<<n1<<" is : "<<r4<<endl;
	
	//finding the power of a number.
	double r5= pow(n1,3);
	cout<<"Power 3 of "<<n1<<" is : "<<r5<<endl;
	
	return 0;
}
