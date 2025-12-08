
#include <iostream>
using namespace std;
int main(){
	
	int num;
	cout<<"Enter an Integer (For the Corresponding Day of a Week) : ";
	cin>>num;
	
	switch (num){
		
		case 1:
			cout<<"1 Corresponds To Monday."<<endl;
		break;
		case 2:
			cout<<"2 Corresponds To Tuesday."<<endl;
		break;
		case 3:
			cout<<"3 Corresponds To Wednesday."<<endl;
		break;
		case 4:
			cout<<"4 Corresponds To Thursday."<<endl;
		break;
		case 5:
			cout<<"5 Corresponds To Friday."<<endl;
		break;
		case 6:
			cout<<"6 Corresponds To Saturday."<<endl;
		break;
		case 7:
			cout<<"7 Corresponds To Sunday."<<endl;
		break;
		default:
			cout<<"Error! Invalid Number."<<endl;
		break;
		
		
	}
return 0;
}

