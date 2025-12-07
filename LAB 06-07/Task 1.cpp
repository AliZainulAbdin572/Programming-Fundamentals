#include <iostream>
using namespace std;
int main(){

 double num;
 cout<<"Enter an integer : ";
 cin >> num;
 
 if(num>0){
 
  cout << "The Number You Have Entered is Positive." << endl;
 
 }
 else if(num<0){
 
  cout << "The Number You Have Entered is Negative." << endl;
 
 }
 else{
 
  cout << "The Number You Have Entered is Zero." << endl;
 }

return 0;
}
