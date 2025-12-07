#include <iostream>
using namespace std;
int main(){
	
	double m1;
	cout<<"Enter your Marks(Out of 100) : ";
	cin>>m1;
	
	if(m1>=90){
		
		cout<<"Grade : A+"<<endl;
		
	}
	if(m1>=80&&m1<=89){
		
		cout<<"Grade : A"<<endl;
		
	}
	if(m1>=70&&m1<=79){
		
		cout<<"Grade : B"<<endl;
		
	}
	if(m1>=60&&m1<=69){
		
		cout<<"Grade : C"<<endl;
		
	}
	if(m1<60){
		
		cout<<"Fail"<<endl;
		
	}
	
	return 0;
}
