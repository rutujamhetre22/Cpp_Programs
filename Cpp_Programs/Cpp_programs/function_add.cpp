/*Demonstrate function overloading for addition of two integer and two
floating point numbers.*/
#include <iostream>
using namespace std;

int sum(int, int);
float sum(float, float);
int main(){
int num1, num2, x;
float num3, num4, y;
cout<<"Enter two integer numbers: ";
cin>>num1>>num2;
cout<<"\n: "<<sum(num1, num2);

cout<<"\nEnter two float numbers: ";
cin>>num3>>num4;
   
cout<<"\nResult: " <<sum(num3, num4)<< endl;

return 0;
}
int sum(int a, int b){
return a+b;
}
float sum(float a, float b){
return a+b;
}

