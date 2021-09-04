/*Define class student which shows the information about the Student using
constructor and destructor - Include the following members
Data Members
1. Name of the Student
2. Roll No
3. Address
4. Percentage
Member functions
1. To assign initial values
2. To accept the values from user.
3. To display all data to user including Grade by using following conditions
a. Per>=70 Distinction
b. Per <70 and Per >=60 First Class
c. Per<60 and Per>=40 Second class
d. Per<40 Student is Fail*/


#include<iostream>
#include<stdio.h>
#include <string>
using namespace std;
class Student
{
public:
int Roll_no;
char name[100]; 
char address[100];
float marks;  

void get_Data()
{
cout<<"\nenter the name";
 cin>>name;
 cout<<"Enter the Roll numbers";
 cin>>Roll_no;
 cout<<"\nenter the address";
 cin>>address;
 cout<<"\nenter the marks";
 cin>>marks;
}
void Show_data()
{
if(marks>70)
cout<<"Destiction";

if(marks<70 && marks >=60)
cout<<"first class";

if(marks<60 && marks >=40)
cout<<"Secand class";

if(marks<40)
cout<<"fail";

}
};
int main()
{
Student s;
s.get_Data();
s.Show_data();
return 0;

}
