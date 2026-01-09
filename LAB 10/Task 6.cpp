#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	double N;
	double Fact=1;
do{

	cout<<"Enter A Number To Find Its Factorial : ";
	cin>>N;
	if(N<=0){
		
		cout<<"Factorial of Negative Numbers is not Defined."<<endl;
	}
	
}while(N<=0);

for(int i=1;i<=N;i++){
	
	Fact=Fact*i;
}
	
	cout<<"The Factorial of "<<N<<" is : "<<fixed<<setprecision(0)<<Fact<<endl;
	return 0;
}
