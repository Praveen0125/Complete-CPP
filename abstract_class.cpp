#include<iostream>
using namespace std;

class animal //abstract class
{
    public:
    virtual void sound()=0;  // due to virtual function it is an abstract class.
    void eat()
    {
        cout<<"Animals eat..."<<endl;
    }
};
class dog : public animal
{
    public:
        void sound()
        {
            cout<<"woof woof..."<<endl;
        }
};

int main()
{
    dog d;
    d.sound();
    d.eat();
}