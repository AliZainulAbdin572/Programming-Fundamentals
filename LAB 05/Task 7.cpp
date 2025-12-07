#include <iostream>
using namespace std;
int main(){
	
	double salary,exp;
	cout<<"Enter Your Salary : $";
	cin>>salary;
	cout<<"Work Experience (In Years) : ";
	cin>>exp;
	
	if(salary>=25000 || exp>=5){
		
		cout<<"Eligiblity Status For Loan : Eligible"<<endl;
	
	}
	else{
		
		cout<<"Eligiblity Status For Loan : Not Eligible"<<endl;
		
	}
		
	return 0;
	
}
