#include <iostream>
using namespace std;
int main(){

	int mainchoice,subchoice;
	double itemprice,quantity;
	char choice;
	double totalprice=0;

 do{
 	
 	cout<<"*******************************************"<<endl;
	cout<<"\tWELCOME TO OUR RESTURANT"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<"Select one Option (1,2 or 3):\n1 : Breakfast\n2 : Lunch\n3 : Dinner\t= ";
	cin>>mainchoice;
 	cout<<endl;
 	
 if(mainchoice==1){
		cout<<"====================================="<<endl;
		cout<<"\tBREAKFAST SECTION"<<endl;
		cout<<"====================================="<<endl;
		cout<<"Select one Option\n1 : Anda Paratha\n2 : Nan Channay\n3 : Siri Paye\n4 : Tea\t\t= ";
		cin>>subchoice;
		cout<<endl;
		
	if(subchoice==1){
		itemprice=40;
		cout<<endl;
		cout<<"Price of one Anda Paratha : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==2){
		itemprice=60;
		cout<<endl;
		cout<<"Price of one Nan Channay : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==3){
		itemprice=150;
		cout<<endl;
		cout<<"Price of one Siri Paye : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==4){
		itemprice=15;
		cout<<endl;
		cout<<"Price of one Tea : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else{
		cout<<endl;
		cout<<"Invalid Choice!"<<endl;
	}
		
 }
 else if(mainchoice==2){		
		cout<<"====================================="<<endl;
		cout<<"\tLUNCH SECTION"<<endl;
		cout<<"====================================="<<endl;		
		cout<<"Select one Option\n1 : Chicken Karahi\n2 : Mutton Karahi\n3 : Egg Fried Rice\n4 : BBQ\t\t= ";
		cin>>subchoice;
		
	if(subchoice==1){	
		itemprice=1050;
		cout<<endl;
		cout<<"Price of 1KG of Chicken Karahi : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==2){
		itemprice=1800;
		cout<<endl;
		cout<<"Price of 1KG of Mutton Karahi : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==3){
		itemprice=450;
		cout<<endl;
		cout<<"Price of 1 Plate Egg Fried Rice : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==4){
		itemprice=1050;
		cout<<endl;
		cout<<"Price of 1 Dozen BBQ : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else{
		cout<<endl;
		cout<<"Invalid Choice!"<<endl;
	}
		
 }	
 else if(mainchoice==3){		
		cout<<"====================================="<<endl;
		cout<<"\tDINNER SECTION"<<endl;
		cout<<"====================================="<<endl;		
		cout<<"Select one Option\n1 : Chicken Karahi\n2 : Mutton Karahi\n3 : Egg Fried Rice\n4 : BBQ\n5 : Saji\t\t= ";
		cin>>subchoice;
		
	if(subchoice==1){	
		itemprice=1050;
		cout<<endl;
		cout<<"Price of 1KG of Chicken Karahi : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==2){
		itemprice=1800;
		cout<<endl;
		cout<<"Price of 1KG of Mutton Karahi : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==3){
		itemprice=450;
		cout<<endl;
		cout<<"Price of 1 Plate Egg Fried Rice : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==4){
		itemprice=1050;
		cout<<endl;
		cout<<"Price of 1 Dozen BBQ : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else if(subchoice==5){
		itemprice=800;
		cout<<endl;
		cout<<"Price of 1KG of Saji : Rs."<<itemprice<<endl;
		cout<<"Select the Quantity : ";
		cin>>quantity;
		totalprice+=itemprice*quantity;
	}
	else{
		cout<<endl;
		cout<<"Invalid Choice!"<<endl;
	}
		
 }	
 else{
 	cout<<endl;
 	cout<<"Invalid Choice!"<<endl;	
 }	
	cout<<endl;
	cout<<"Would You Like To Order Anything Else? (Y/N)\t: ";
	cin>>choice;

 }while(choice=='y'||choice=='Y');
 
 	cout<<"*******************************************"<<endl;
	cout<<"\t\tTOTAL BILL"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<endl;
	cout<<"Your Total Bill is : Rs."<<totalprice<<endl;
	cout<<endl;
	cout<<"*******************************************"<<endl;
	cout<<"\t  ~THANK YOU FOR COMING~"<<endl;
	cout<<"*******************************************"<<endl;
	
	return 0;
}
