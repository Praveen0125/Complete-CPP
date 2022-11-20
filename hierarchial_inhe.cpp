#include <iostream>
using namespace std;

class animal
{
    public:
    void eat();
    void stucture();
};

void animal :: eat()
{
    cout<<"all animals eat..."<<endl;
}
void animal :: stucture()
{
    cout<<"legs = 4"<<endl;
    cout<<"eyes = 2"<<endl;
}

class cat : public animal
{
    public:
    void sound()
    {
        cout<<"meow meow..."<<endl;
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
    cat c;
    c.eat();
    c.sound();
    c.stucture();
    dog d;
    d.eat();
    d.sound();
    d.stucture();
}