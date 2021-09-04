/* An electricity board charges the following rates to domestic users to
discourage large consumption of energy:
For the first 30 units - 1.50/- per unit
For next 200 units
- 3.00/- per unit
Beyond 300 units
- 4.25/- per unit
Create a class ElectricityBill for atleast 5 users with following opeartions….
Write a program to read the name of the user and number of units consumed
and print out the charges with names.
If the total amount is more than Rs. 500.00 then an additional surcharge of 15%
is added.*/
#include<iostream>
using namespace  std;
class elec_bill{
public:
float unit;
char name[50];
void accept()
{
cout<<"\n enter the name";
cin>>name;

cout<<"\n enter the unit";
cin>>unit;
}
void print_bill();
};
void elec_bill::print_bill()
{
int bill =0;
if(unit >=30 && unit <=300)
bill =(500+(unit*1.50));
else if(unit>=200 && unit <=300)
bill=(500+(unit*3.00)+(unit*1.50));
else if(unit>300);
bill=(500+(unit*4.25));
if(bill>500)
cout<<bill+(bill*(15/100));
cout<<"\n bills="<<bill<<name;
}
int main()
{
elec_bill e1[5];
int i, cnt;
cout<<"\n enter how many customer you want";
cin>>cnt;
for(i=0;i<cnt;i++)
e1[i].accept();
for(i=0;i<cnt;i++)
e1[i].print_bill();
return 0;
}

