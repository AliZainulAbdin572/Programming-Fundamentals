#include <iostream>
using namespace std;
int main(){
	
	int var = 10;
	int *ptr=&var;
	
	cout<<"Value of the Variable is : "<<*ptr<<endl;
	
	return 0;
}
