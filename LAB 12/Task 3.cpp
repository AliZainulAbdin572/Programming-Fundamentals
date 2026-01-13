#include <iostream>
using namespace std;

void checkEvenOdd(int n){
	
	if(n%2==0){
		
		cout<<" Even.";
	}
	else{
		
		cout<<" Odd.";
	}
}

int main(){
	
	cout<<"The Number 7 is ";
	checkEvenOdd(7);
	cout<<endl;
	cout<<"The Number 12 is ";
	checkEvenOdd(12);
	
	return 0;
}
