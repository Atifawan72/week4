#include<iostream>
using namespace std;
void howManyStickers(int n ){
int Stickers;
Stickers=(n*n)*6;
cout<<"Number of stickers needed: "<<Stickers<<endl;
}
int main(){
    int n; 
    cout<<"Enter the side length of the Rubik's Cube: ";
    cin>>n;
howManyStickers(n);
}