//Swap two integer numbers and two characters using function
//overloading.
#include<iostream>
using namespace std;
class Swap
{
    public:
    int a;
    int& b=a;
   void Swap1(int a,int b)
{
    cout<<"\nbefore swapping:\n a="<<a<<"\n b="<<b;
    cout<<"\n after swaping:";
    swap(a,b);
    cout<<"\na="<<a<<"\nb="<<b;

}
};
int main()
{
    Swap a;
    a.Swap1(70,60);
    return 0;
}
