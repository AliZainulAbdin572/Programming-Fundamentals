#include <iostream>
using namespace std;
int main(){
	
	int i=1;
	int table,limit;
	cout<<"Enter a Number To Generate Its Table : ";
	cin>>table;
	cout<<"Enter a Number for Limiting That Table : ";
	cin>>limit;
	
	while(i<=limit){
		
		cout<<table<<"x"<<i<<" = "<<table*i<<endl;
		i++;
	}
	
	return 0;
}
