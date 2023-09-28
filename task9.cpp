#include <iostream>
using namespace std;

void doubleFuel(float a);

int main() {
	float a;
	cout<<"Enter the distance: ";
	cin>>a;
	doubleFuel(a);
    
}

void doubleFuel(float	 a){

if(a<=10){
cout<<"Fuel needed: "<<100;
}
else
cout<<"Fuel needed: "<<a*10;

}