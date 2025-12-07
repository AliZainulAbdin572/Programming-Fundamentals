#include <iostream>
using namespace std;
int main(){

 string username;
 string password;
 
 cout << "Enter Your Username : ";
 cin >> username;
 cout << "Enter Your Password : ";
 cin >> password;
 
 if(username=="admin"&&password=="12345"){
 
 cout << "Access Granted." << endl;
 }
 else if(username=="admin"&&password!="12345"){
 
 cout << "Wrong Password." << endl;
 }
 else{
 
 cout << "User Not Found." << endl;
 }
 
return 0;
}
    