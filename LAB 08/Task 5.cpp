#include <iostream>
using namespace std;
int main(){
	
	cout<<"*****************************"<<endl;
	cout<<"~WELCOME TO OUR SHOPPING MALL~"<<endl;
	cout<<"*****************************"<<endl;
	bool flag;
	int num,item,quantity;
	double itemPrice,totalprice,discount,finalprice;
	cout<<"Please Select A Category From The List\n(1 for Electronics\n2 for Clothing\n3 for Groceries) : ";
	cin>>num;
	
	switch (num){
		case 1:
			cout<<"*****************************"<<endl;
			cout<<"\"CATEGORY : ELECTRONICS\""<<endl;
			cout<<"*****************************"<<endl;
			
			cout<<"Choose an Item\n(1 for Laptop\n2 for Smartphone\n3 for Headphones) : ";
			cin>>item;
			
			switch(item){
				case 1:
					itemPrice = 1000;
					cout<<"Price of 1 Laptop : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;
				break;
				case 2:
					itemPrice = 700;
					cout<<"Price of 1 Smartphone : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;
				break;
				case 3:
					itemPrice = 150;
					cout<<"Price of 1 Pair of Headphones : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;	
				break;
				default:
					cout<<"Invalid Choice!"<<endl;
				flag=0;
			 	break;
				
			}
				
		break;
		
		case 2:
			cout<<"*****************************"<<endl;
			cout<<"\"CATEGORY : CLOTHING\""<<endl;
			cout<<"*****************************"<<endl;
			
			cout<<"Choose an Item\n(1 for Jacket\n2 for T-shirt\n3 for Jeans) : ";
			cin>>item;
			switch(item){
				case 1:
					itemPrice = 120;
					cout<<"Price of 1 Jacket : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;
				break;
				case 2:
					itemPrice = 40;
					cout<<"Price of 1 T-shirt : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;
				break;
				case 3:
					itemPrice = 60;
					cout<<"Price of 1 Pair of Jeans : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;
				break;
				default:
					cout<<"Invalid Choice!"<<endl;
				flag=0;
				break;
				
			}
			
		break;
	
		case 3:
			cout<<"*****************************"<<endl;
			cout<<"\"CATEGORY : GROCERIES\""<<endl;
			cout<<"*****************************"<<endl;
			
			cout<<"Choose an Item\n(1 for Milk\n2 for Bread\n3 for Eggs) : ";
			cin>>item;
			
			switch(item){
				case 1:
					itemPrice = 2;
					cout<<"Price of 1 Liter Milk : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;
				break;
				case 2:
					itemPrice = 3;
					cout<<"Price of 1 Loaf Bread : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;
				break;
				case 3:
					itemPrice = 5;
					cout<<"Price of 1 Dozen Eggs : $"<<itemPrice<<endl;
					cout<<"Select the Quantity : ";
					cin>>quantity;
				flag=1;
				break;
				default:
					cout<<"Invalid Choice!"<<endl;
				flag=0;
				break;
				
			}
		
	
			
	break;
	default:
			cout<<"Invalid Category!"<<endl;
			break;
			flag=0;
	}
	
if(flag==1){
	
	
	cout<<"*****************************"<<endl;
	cout<<"\"INVOICE\""<<endl;
	cout<<"*****************************"<<endl;
	
	totalprice = quantity*itemPrice;
	cout<<"Total Price : $"<<totalprice<<endl;
	
	if(totalprice<100){
		discount = 0;
		cout<<"Discount : "<<discount<<"%"<<endl;
	}
	else if(totalprice>=100&&totalprice<=500){
		discount = 10;
		cout<<"Discount : "<<discount<<"%"<<endl;
	}
	else{
		discount = 20;
		cout<<"Discount : "<<discount<<"%"<<endl;
	}
	
	
	finalprice = totalprice-(discount/100)*totalprice;
	cout<<"Final Price : $"<<finalprice<<endl;
	
	cout<<"\t"<<endl;
	cout<<"====THANK YOU FOR SHOPPING===="<<endl;
}
	
	
	return 0;
}
