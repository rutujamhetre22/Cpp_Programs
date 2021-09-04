/*Write a program to implement a telephone bill class with Name, Address,
Tel. No., No. of calls as data members. Compute the amount to be paid if the
charges per call is Rs. 2/-.*/

#include<iostream>
using namespace std;
class Telephone{
public:
char name[20];
char Address[50];
int tel_no;
int call;
int amount;
 void getData(){
 cout<< "enter the name address tel.no and call";
 cin>>name>>Address>>tel_no>>call;
 }

 void showData(){
 cout<<"Name "<<name<<"\nAddress "<<Address<<"\nTelephone numbers "<<tel_no<<"\ncalls:"<<call;
 amount=call*2;
 cout<<amount;
 
 }
};

int main()
{

Telephone t;
 t.getData();
 t.showData();


}
