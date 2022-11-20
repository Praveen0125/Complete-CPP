#include<iostream>
using namespace std;
class saurabh;
class praveen
{
private:
    int a;
public:
    void iHave()
    {
        a = 10;
    }
    friend void abhishek(praveen p1 , saurabh p2); //Freind function
};

class saurabh
{
private:
    int b;
public:
    void iHave()
    {
        b = 10;
    }
    friend void abhishek(praveen p1 , saurabh p2); //Freind function
};

//Freind function declaration

void abhishek (praveen p1, saurabh p2)
{
    int c;
    c = p1.a + p2.b;
    cout<<"Yay! I got "<<c<<endl;
}

int main()
{
    praveen p;
    p.iHave();
    saurabh s;
    s.iHave();
    abhishek(p, s);
    return 0;
}