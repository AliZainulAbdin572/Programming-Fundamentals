#include <iostream>
using namespace std;
int main(){

 double s1,s2,s3;char g1,g2,g3;
 cout << "Enter Your Marks in First Subject(Out of 100): ";
 cin >> s1;
 cout << "Enter Your Marks in Second Subject(Out of 100) : ";
 cin >> s2;
 cout << "Enter Your Marks in Third Subject(Out of 100) : ";
 cin >> s3;
 
 double total = s1+s2+s3;
 cout << "Total Marks in All Subjects : " <<total<< endl;
 double percentage = (total/300)*100;
 cout << "Percentage : " <<percentage<<"%"<< endl;
 double percent1 = (s1/100)*100;
 double percent2 = (s2/100)*100;
 double percent3 = (s3/100)*100;
  
 //. For Subject 1......
 
 if(percent1>=90){
   
   g1 = 'A';
 }
 else if(percent1>=80&& percent1<90){
 
   g1 = 'B';
 }
 else if(percent1>=70&&percent1<80){
 
   g1 = 'C';
 }
 else if(percent1>=60&&percent1<70){
 
   g1 = 'D';
 }
 else{
 
   g1 = 'F';
 }
 
 //. For Subject 2...........
 
 if(percent2>=90){
   
   g2 = 'A';
 }
 else if(percent2>=80&& percent2<90){
 
   g2 = 'B';
 }
 else if(percent2>=70&&percent2<80){
 
   g2 = 'C';
 }
 else if(percent2>=60&&percent2<70){
 
   g2 = 'D';
 }
 else{
 
   g2 = 'F';
 }
 
 //. For Subject 3..............

 if(percent3>=90){
   
   g3 = 'A';
 }
 else if(percent3>=80&& percent3<90){
 
   g3 = 'B';
 }
 else if(percent3>=70&&percent3<80){
 
   g3 = 'C';
 }
 else if(percent3>=60&&percent3<70){
 
   g3 = 'D';
 }
 else{
 
   g3 = 'F';
 }
 
 //. Grading............

 

if(percentage>=90){
   
   cout << "Grade A " << endl;
 }
 else if(percentage>=80&& percentage<90){
 
   cout << "Grade B "<< endl;
 }
 else if(percentage>=70&& percentage<80){
 
   cout << "Grade C" << endl;
 }
 else if(percentage>=60&& percentage<70){
 
   cout << "Grade D" << endl; 
 }
 else{
 
   cout << "Grade F "<< endl; 
 }
 
 //. Failure Condition..............
 
 if(g1=='F'||g2=='F'||g3=='F'){
 
 cout << "Status : Failed" << endl;
 }
 else{
 	
 cout<<"Status : Pass"<<endl;
 }
 
 //. Merit Scholarship..............
 
if(g1=='A'&&g2=='A'&&g3=='A'&&total>=270){
 
 cout << "You are eligible for a Merit Scholarship." << endl;
 }
else if(g1=='B'&&g2=='B'&&g3=='B'&&total>=240){
 
 cout << "You are eligible for a Regular Scholarship." << endl;
 }
else{
	
	cout<<"You are Not Eligible for any Scholarship. "<<endl;
}
 
return 0;
}
    
