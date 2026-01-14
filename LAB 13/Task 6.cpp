#include <iostream>
using namespace std;

int main(){
	
	int var=15;
	void *ptr= &var;
	
	cout<<"Value of the Integer (Type Casting Procedure....) : "<< *(int *)ptr <<endl;
	
return 0;
}
