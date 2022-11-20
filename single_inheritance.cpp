#include<iostream>
using namespace std;
class Dad
{
    protected:
    int amount;
    public:
    void input()
    {
        amount = 100000;
    }
};
class Son : public Dad
{
    private:
    int money;
    public:
    void self()
    {
        money = 2500;
    }
    void show()
    {
        cout<<"Earned himself: "<<money<<endl;
        cout<<"Amount inherited: "<<amount<<endl;
    }
};

int main()
{
    Son s;
    s.self();
    s.input();
    s.show();
}