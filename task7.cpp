#include<iostream>
using namespace std;
void evenOrOdd(int a){
if(a%2 == 0 ){
cout<<"Number "<<a<<" is "<<"even" ;
}
else
cout<<"odd";
}
main(){
int n;
cout<<"Enter a number: ";
cin>>n;
evenOrOdd(n);
}