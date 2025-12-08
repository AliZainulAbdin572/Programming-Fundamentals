
#include <iostream>
using namespace std;
int main(){
	
	double area,radius,length,width,base,height;
	int num;
	cout<<"Select A Shape(To Find the Area)\n1 for Circle\n2 for Rectangle\n3 for Triangle : ";
	cin>>num;
	
	switch(num){
		
		case 1:
			cout<<"Enter the Radius of Circle(In Centimeters) = ";
			cin>>radius;
			
			area = 3.14159*(radius)*(radius);
			cout<<"Area of the given Circle = "<<area<<"cm"<<endl;
		break;
		
		case 2:
			cout<<"Enter the Length of Rectangle(In Centimeters) = ";
			cin>>length;
			cout<<"Enter the Width of Rectangle(In Centimeters) = ";
			cin>>width;
			
			area = length*width;
			cout<<"Area of the given Rectangle = "<<area<<"cm"<<endl;
		break;
		
		case 3:
			cout<<"Enter the Base of Triangle(In Centimeters) = ";
			cin>>base;
			cout<<"Enter the Height of Triangle(In Centimeters) = ";
			cin>>height;
			
			area = 0.5*base*height;
			cout<<"Area of the given Triangle = "<<area<<"cm"<<endl;
		break;
		
		default:
			cout<<"Error! Invalid Input."<<endl;
		break;	
	}
	
return 0;
}

