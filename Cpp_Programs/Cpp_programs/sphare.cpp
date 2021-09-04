/*Write a Program to implement a sphere class with appropriate members
and
member function to find the surface area and the volume.
(Surface = 4 π r2 and Volume = 4/ 3 π r3)*/

#include<iostream>
using namespace std;
class sphere{
public :
int r;
float surface_value;
float volume_value;
   
void surface(){
   cout<<"enter the value of r";
   cin>>r;
   surface_value = 4*4.13*r*2;
   cout<<"\nthe value of sphere"<<surface_value;
   }
void volume(){
   cout<<"\n enter the value of r";
   cin>>r;
   volume_value = 4/3*3.14*r*3;
   cout<<"\nthe value of valume"<<volume_value;
   }
   };
   int main()
   {
   sphere s;
   s.surface();
   s.volume();
    
    return 0;
    }
    
