#include <iostream>

using namespace std;
int main(){
	
		int table,limit;
		cout<<"Which Table Do You Want?(Enter That Number) : ";
		cin>>table;
		cout<<"To What Extent Do You Want This Table?(Enter That Limit) : ";
		cin>>limit;
	
	for(int i=1;i<=limit;i++){
	
		cout<<table<<" x "<<i<<" = "<<table*i<<endl;
	
	}

	return 0;
}
