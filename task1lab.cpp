#include<iostream>
using namespace std;
void fuel(){
	float distance,fuell;
	cout<<"Enter the distance: ";
	cin>>distance;
	fuell=distance*10;
	cout<<"Fuel needed: "<<fuell;
}
main(){
	fuel();
}
