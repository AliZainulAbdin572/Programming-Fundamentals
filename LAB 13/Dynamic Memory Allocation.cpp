#include <iostream>
using namespace std;
int main(){
	
	// Step 1: Declare a pointer to int.
	int *ptr;
	
	// Step 2: Ask user for the number of elements(Size for the Memory).
	int size;
	cout<<"Enter The Size To Allocate Memory : ";
	cin>>size;
	
	//Step 3: Dynamically allocating the new memory using new operator.
	ptr = new int[size];
		
	//Step 4: Checking whether the memory is allocated or not. 
	if(!ptr){
		cout<<"Memory Allocation Failed!"<<endl;
		return 1;	
	}	

	//Step 5: Entering the values into the dynamically allocated array (Here "ptr" works as an array).
	cout<<"Enter "<<size<<" Integer Values:-"<<endl;
	cout<<endl;
		
	for(int i=0;i<size;i++){
		
		cout<<"Value "<<i<<" : ";
		cin>>ptr[i];
	}
	
	//Step 6: Printing the Values Entered by the user by using pointer arithematic.
	cout<<"Values Entered By You Are : ";
	
	for(int i=0;i<size;i++){
		
		cout<<*(ptr+i)<<" ";
	}
	
	cout<<endl;
	
	//Step 7: Free the dynamically allocated memory to avoid the memory leaks.
	delete[] ptr;
	
	/*Remember that the static memory always stores in the stack while the 
	dynamically allocated memory is on the heap and is used by using the pointer.*/
	
		/*So, there is no need to delete the memory on stack as it gets destroyed 
	automatically but the memory on the heap is deleted at the end of program to
	avoid the memory leaks because it doesn't get destroyed automatically.*/ 
	
return 0;
}







