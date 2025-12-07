#include <iostream>
using namespace std;
int main(){

  int age;
  double income;
  cout << "Enter Your Age(In Years): ";
  cin >> age;
  cout << "Enter Your Income : $";
  cin >> income;
  
  if(age>=18){
    if(income>=30000){
    
    cout << "Congratulations! You are Eligible For a Loan." << endl;
    }
    else{
    
    cout << "You meet the age requirement but are not eligible for loan because your income is below $30000." << endl;
    }
  
 
 }
 else{
 
 cout << "You are not eligible for a loan because you are under 18 years of age." << endl;
 }
  
  
  
  
return 0;
}
    