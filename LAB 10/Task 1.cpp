#include <iostream>
using namespace std;
int main(){
	
	int N;
	
do{	
	 cout<<"Enter a Number(N) To Print All The Numbers Upto (N) : ";
	 cin>>N;
	if(N<=0){
		
	 cout<<"The Number (N) Must Be Greater Than Zero."<<endl;
	}
	
	}while(N<=0);
	
	 cout<<"All The Numbers Upto "<<N<<" Are As Follows : "<<endl;
for(int i=1;i<=N;i++){
		
	 cout<<i<<endl;
	}
	
	return 0;
}
