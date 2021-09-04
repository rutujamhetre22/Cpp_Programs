//Area of Rectangle, Circle and Square.
#include<iostream>
using namespace std;
class Area
{
    public:
    void area(int l, int b)
{
cout<<"\n area of rectangle :"<<l*b;
}
void area( double r){
cout<<"\n area of circle :"<<3.14*r*r;
}
void area(float side){
cout<<"\n area of square  :"<<side*side;   
}
};
int main()
{
    Area a;
    a.area(2,6);
    a.area(60.0);
    a.area(90.46f);

}

