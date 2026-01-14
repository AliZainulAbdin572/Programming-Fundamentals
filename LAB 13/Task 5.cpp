#include <iostream>
using namespace std;
int main(){
	
	int var=10;
	int *ptr = NULL;
	
		if(ptr==NULL){
			
			cout<<"This Pointer Does not Point to any Valid Memory. "<<endl;
		}
		else{
			
			cout<<"The Pointer Holds Adress : "<<ptr<<endl;
		}
	
	
	return 0;
}
