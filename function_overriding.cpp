#include <iostream>
using namespace std;

class A
{
public:
    virtual void put()          // we can write virtual so that it will not get called using pointer also.
    {
        cout << "Good morning..." << endl;
    }
};

class B : public A
{
public:
    void put()
    {
        cout << "Good night..." << endl;
    }
};

int main()
{
    A *p;
    B obj;
    p = &obj;
    p->put();       //good morning  after writing virtual in base class we get good night.
    obj.put();      //good night 
}