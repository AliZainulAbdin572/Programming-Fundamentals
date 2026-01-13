#include <iostream>
using namespace std;

double factorial(int n){
	
	int fact=1;
	for(int i=1;i<=n;i++){
		
		fact*=i;
	}
	
	return fact;
}
int main(){
	
	int n;
	cout<<"Enter a Number to Find its Factorial : ";
	cin>>n;
	cout<<"The Factorial of "<<n<<" is : "<<factorial(n)<<endl;
	
}
