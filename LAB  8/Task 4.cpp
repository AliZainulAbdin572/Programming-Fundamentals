#include <iostream>
using namespace std;
int main(){
	
	double amount;
	cout<<"Enter the Amount (IN USD) : ";
	cin>>amount;
	int num;
	cout<<"Choose the Currency To Convert Your Amount\n(1 for Pkr\n2 for Inr\n3 for Euros) :";
	cin>>num;
	
	switch(num){
		
		case 1:
			cout<<"Your Amount in Pkr = "<<amount*282.64<<endl;
		break;		
		case 2:
			cout<<"Your Amount in Inr = "<<amount*90.05<<endl;
		break;
		case 3:
			cout<<"Your Amount in Euros = "<<amount*0.86<<endl;
		break;
		default:
			cout<<"Error! Invalid Input."<<endl;
		break;
		
	}
	
return 0;
}
