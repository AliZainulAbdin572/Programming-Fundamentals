#include <iostream>
using namespace std;
int main(){

  char grade;
  int serviceYears;
  cout<<"Enter Your Grade(A,B or C) : ";
  cin>>grade;
  cout<<"Enter Your Service Years : ";
  cin>>serviceYears;

  double basicSalary;
  double bonusPercent;
  double bonusAmount;
  double grossSalary;
  double taxPercent;
  double taxAmount;
  double netSalary;
  
  //-------------------------------------
  
  if(grade=='A'||grade=='a'){
  
   basicSalary = 50000;
   cout<<"Basic Salary : $"<<basicSalary<<endl;
  }
  if(grade=='B'||grade=='b'){
  
   basicSalary = 30000;
   cout<<"Basic Salary : $"<<basicSalary<<endl;
  }
  if(grade=='C'||grade=='c'){
  
   basicSalary = 20000;
   cout<<"Basic Salary : $"<<basicSalary<<endl;
  }
  
  //------------------------------------------
    
  if(serviceYears>=10){
  
   bonusPercent = 10;
   cout<<"Bonus Percent : "<<bonusPercent<<"%"<<endl;
    
  }
    
  if(serviceYears>=5 && serviceYears<=9){
    
   bonusPercent = 5;
   cout<<"Bonus Percent : "<<bonusPercent<<"%"<<endl;
    
  }
    
  if(serviceYears<5){
    
   bonusPercent = 0;
   cout<<"Bonus Percent : "<<bonusPercent<<"%"<<endl;
    
  }
    
  bonusAmount = (bonusPercent/100)*basicSalary;
  cout<<"Bonus Amount : $" <<bonusAmount<<endl;
    
  //--------------------------------------------  
    
  grossSalary = basicSalary+bonusAmount;
  cout<<"Gross Salary : $"<<grossSalary<<endl;
    
  if(grossSalary>40000){
    
   taxPercent = 20;
   cout<<"Tax Percent : " <<taxPercent<<"%"<<endl;
  }
    
  if(grossSalary>=30000 && grossSalary<=40000){
    
   taxPercent = 10;
   cout<<"Tax Percent : " <<taxPercent<<"%"<<endl;
  }
    
  if(grossSalary<30000){
    
   taxPercent = 0;
   cout<<"Tax Percent : " <<taxPercent<<"%"<<endl;
  }
    
  taxAmount = (taxPercent/100)*grossSalary;
  cout<<"Tax Amount : $"<<taxAmount<<endl;
  
  //-------------------------------------
  
  netSalary = grossSalary-taxAmount;
  cout<<"Net Salary : $"<<netSalary<<endl;
  
return 0;
}