#include <iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter the Size of Array (Integer) : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the Values in the Array : "<<endl;
for(int i=0;i<n;i++){
		
		cin>>arr[i];
	}
	
	int max=arr[0];
for(int i=1;i<n;i++){
	
	if(arr[i]>max){
		
		max=arr[i];
	}
}
	cout<<"Largest Value is : "<<max<<endl;
	
	
	return 0;
}
