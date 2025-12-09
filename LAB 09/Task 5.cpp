#include <iostream>
using namespace std;
int main(){
	
	double balance = 1000;
	int num;
	double amount;
	
	while(true){
		
		cout<<"------------------------------"<<endl;
		cout<<"SIMPLE BANKING SYSTEM"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"Select an Option(1-4)\n1 : Deposit Money\n2 : Withdraw Money\n3 : Check Balance\n4 : Exit : ";
		cin>>num;
		
	
		
		
	if(num==1){
			
			cout<<"Enter The Money To Deposit : $";
			cin>>amount;
			
			if(amount<=0){
				
				cout<<"Enter The Money Again(Use Positive Numbers)"<<endl;
					
			}
			else{
				cout<<"Your Money has been Deposited Successfully!"<<endl;
				balance = balance+amount;
				cout<<"Current Balance : $"<<balance<<endl;
			}
					
	}
	else if(num==2){
			cout<<"Enter The Money To Withdraw : $";
			cin>>amount;
			
			if(amount<=0){
				
				cout<<"Enter The Money Again(Use Positive Numbers)"<<endl;
			}
			
				
			else if(amount>balance){
					
				cout<<"Insufficient Balance!"<<endl;
			}
			else{
					
				cout<<"Your Money has been Withdrawn Successfully! "<<endl;
				balance = balance-amount;
				cout<<"Remaining Balance : $"<<balance<<endl;
			}
				
	}
	else if(num==3){
		
		cout<<"Your Current Balance : $"<<balance<<endl;
		
	}
	else if(num==4){
		
		cout<<"Banking Session Closed.\nHave a Good Day!"<<endl;	
		break;	
	}
	
	else{
		
		cout<<"Please Enter The Numbers \"1,2,3,4\" Only!"<<endl;
			
	}
		
	}	
	
	return 0;
}
