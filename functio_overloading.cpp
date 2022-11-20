#include <iostream>
using namespace std;

class A
{
    int a, b, add, mul;

public:
    void sum()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        add = a+b;
        cout<<"Sum is: "<<add<<endl;
    }
    void sum(int a, int b)
    {
        mul = a*b;
        cout<<"Product is: "<<mul<<endl;
    }
};

int main()
{
    A a;
    a.sum(20,10); //compile time polymorphism as we know this function will run before the down one.
    a.sum();
}