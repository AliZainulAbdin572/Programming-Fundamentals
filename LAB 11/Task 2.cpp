#include <iostream>
using namespace std;
int main(){
	
	int N;
	int arr[N];
	
	cout<<"Enter The Size of Array : ";
	cin>>N;
	
	cout<<"Enter the Value In Array : "<<endl;
	for(int i=0;i<N;i++){
		
		cin>>arr[i];
	}
	
	cout<<"Values of Array In Reverse Order : ";
	for(int i=N-1;i>=0;i--){
		
		cout<<arr[i]<<" ";
	}
	
	
	
	return 0;
}
