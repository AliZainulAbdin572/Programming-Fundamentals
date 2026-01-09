#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	int N;
	double sum=0;
do{
	
	cout<<"Enter A Number(N) To Find The Sum of All The Numbers Upto N : ";
	cin>>N;
	if(N<=0){
		cout<<"The Number Must Be A Natural Number."<<endl;
	}
	
	
	
}while(N<=0);

for(int i=1;i<=N;i++){
	sum+=i;	
}
	cout<<"The Sum of First "<<N<<" Natural Numbers is : "<<sum<<fixed<<setprecision(0)<<endl;
	return 0;
}
