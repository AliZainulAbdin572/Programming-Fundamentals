#include <iostream>
using namespace std;
int main(){

 double temp;
 cout << "Enter the Temperature(In Celcius) : ";
 cin >> temp;
 
 if(temp>=40){
 
 cout << "Stay indoors because it is extremely hot and could be dangerous to your health." << endl;
 }
 else if(temp>=30&&temp<=39){
 
 cout << "Drink plenty of water to stay hydrated in the hot weather." << endl;
 }
 else if(temp>=20&&temp<=29){
 
 cout << "The weather is pleasent and suitable for outdoor activities." << endl;
 }
 else{
 
 cout << "Wear the warm clothes to stay comfortable in the cooler weather." << endl;
 }
 
 
return 0;
}
    
