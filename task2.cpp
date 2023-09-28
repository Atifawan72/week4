#include<iostream>
using namespace std;
void printfeet(){
float inches, feet;
cout<<"Enter the measurement in inches: ";
cin>>inches;
feet=inches*1/12;
cout<<"Equivalent in feet: "<<feet;
}
main(){
printfeet();

}