/**.1 Create the following classes and write their appropriate class members and
display proper information to user.
a) Time b) Date c) Person d) Student
e) Fan f) Point
g)B*/
#include<iostream>
using namespace std;
class Time
{
public:
int hour;
int min;
int sec;

void setData()
{
cout<<"enter hours min & sec";
cin>>hour>>min>>sec;
}
void showData()
{
cout<<""<<hour<<"\\"<<min<<"\\"<<sec; 
}

};

class Date{
public:
int dd;
int mm;
int year;
void setData()
{
cout<<"\nenter day month and year";
cin>>dd>>mm>>year;
}
void showData()
{
cout<<""<<dd<<"\\"<<mm<<"\\"<<year;
}
};
class person{
public:
char name[20];
char address[60];
 long int mo_no;
void setData(){
cout<<"\nenter the name address and mobile";
cin>>name>>address>>mo_no;
}
void showData(){
cout<<"\nname of person :"<<name<<"\nAddress of person :"<<address<<"\nMo_no :"<<mo_no;
}
};
  class student{
  public :
 char name[20];
 int roll_no;
 int marks;
 
 void setData(){
 cout<<"\n enter the student name roll_no and marks";
 cin>>name>>roll_no>>marks;
 }
  void showData(){
  cout<<"name of studen:\n"<<name<<"\nroll number :"<<roll_no<<"\nmarks of student :"<<marks; 
 }
 };

int main()
{
Time t;
t.setData();
t.showData();

 Date d;
 d.setData();
 d.showData();
 
 person p;
 p.setData();
 p.showData();
 
 student s;
 s.setData();
 s.showData();
return 0;
}
