#include <iostream>
using namespace std;
int main(){
	
	string username;
	string password;
	string role;
	cout<<"Enter The Username : ";
	cin>>username;
	cout<<"Enter Your Password : ";
	cin>>password;
	
	
	if(username=="admin" && password=="password123"){
		
		cout<<"Authentication Successful."<<endl;
		
		cout<<"Enter Your Role : ";
		cin>>role;
		
		if(role=="Admin" || role=="admin"){
			
			cout<<"Full Access."<<endl;
		}
		else if(role=="Guest" || role=="guest"){
		
		cout<<"Limited Access."<<endl;
		}
		else{
		
		cout<<"No Access."<<endl;
		}	
			
	}
	else{
		
		cout<<"Authentication Failed.Access Denied."<<endl;		

	}
	
	
	
	
	
	
	
	return 0;
}
