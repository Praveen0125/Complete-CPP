#include<iostream>
using namespace std;
class A
{
    protected:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter two numbers: "<<endl;
        cin>>a>>b;
    }
};
class B : public A
{
    public:
    void add()
    {
        double c;
        c = a+b;
        cout<<"Sum is: "<<c<<endl;
    }
    void diff()
    {
        double c;
        c = a-b;
        cout<<"Diff is: "<<c<<endl;
    }
};
class C : public B
{
    public:
    void mul()
    {
        double c;
        c = a*b;
        cout<<"Pro is: "<<c<<endl;
    }
    void div()
    {
        double c;
        c = a/b;
        cout<<"Div is: "<<c<<endl;
    }
};

int main()
{
    C num;
    num.input();
    num.add();
    num.diff();
    num.mul();
    num.div();
}