#include <iostream>
using namespace std;
int main(){
	
	char s1;
	cout<<"Enter the color of signal(R/G/Y) : ";
	cin>>s1;
	
	
	if(s1=='R'||s1=='r'){
		
		cout<<"Red : Stop"<<endl;
		
	}
	
	if(s1=='G'||s1=='g'){
		
		cout<<"Green : Go"<<endl;
		
	}
	
	if(s1=='Y'||s1=='y'){
		
		cout<<"Yellow : Slow Down"<<endl;
		
	}
	
	return 0;
}
