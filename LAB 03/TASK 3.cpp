#include <iostream>
#include <iomanip> //setprecision() ka use krny ky liye hm ny ye library include ki ha jo ky aik manipulator ha. 
using namespace std;
int main(){
	
	double Test_score1= 85.5; //for more precision we have used "double" datatype here.
	double Test_score2= 90.75;  
	double Test_score3= 88.25;
	
	double Average= (Test_score1 + Test_score2 + Test_score3)/3;//formula to find the average.
	
	cout<<"The average of "<<Test_score1<<" , "<<Test_score2<<" and "<<Test_score3<<" = "<<fixed<<setprecision(2)<<Average<<endl;
	/*in above statement the "fixed" is used to display the exact number of digits after the decimal and the setprecision(2) 
	means that only two digits after the decimal will be displayed on the black screen.*/
	
	return 0;
}
