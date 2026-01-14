#include <iostream>
using namespace std;
int main(){
	
	int var=20;
	int *ptr=&var;
		*ptr=30;
	cout<<"Modified Value of the Varibale is : "<<var<<endl;
	
	return 0;
}
