#include <iostream>
using namespace std;

int main(){
   	
	double I1= 12.95;//double datatype is used here
	double I2= 24.95;
	double I3= 6.95;
	double I4= 14.95;
	double I5= 3.95;
	
	const double Sales_Tax_Rate= 0.06;  //6% = 6/100 = 0.06 and this sale tax rate will be kept constant.
	
	cout<<"Price of item 1: $"<<I1<<endl;//printing the individual item's prices.
	cout<<"Price of item 2: $"<<I2<<endl;
	cout<<"Price of item 3: $"<<I3<<endl;
	cout<<"Price of item 4: $"<<I4<<endl;
	cout<<"Price of item 5: $"<<I5<<endl;
	
	double sum= I1+I2+I3+I4+I5; //total price of all items.
	
	cout<<"Subtotal: $"<<sum<<endl;
	
	double Sale_Tax= sum*Sales_Tax_Rate;//as sale tax is equal to the product of sum of all the prices of the given items and sale tax rate.
	
	cout<<"Sales Tax (6%): $"<<Sale_Tax<<endl;
	
	double Total= sum+Sale_Tax;//grand total. 
	
	cout<<"Total: $"<<Total<<endl;
	
	return 0;
}
