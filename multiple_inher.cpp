#include <iostream>
using namespace std;
int a, b;
double c;
class A
{
public:
    void input()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
    }
};
class B
{
public:
    void add()
    {
        c = a + b;
        cout << "Sum is: " << c << endl;
    }
    void diff()
    {
        c = a - b;
        cout << "Diff is: " << c << endl;
    }
};
class C
{
public:
    void mul()
    {
        c = a * b;
        cout << "Pro is: " << c << endl;
    }
    void div()
    {
        c = a / b;
        cout << "Div is: " << c << endl;
    }
};

class D : public A, public B, public C
{
public:
    void great()
    {
        if (a > b)
        {
            cout << "Greater is A: " << a << endl;
        }
        else if (a == b)
        {
            cout << "Both A and B are of same value" << endl;
        }

        else
        {
            cout << "Greater is B: " << b << endl;
        }
    }
    void equal()
    {
        if (a == b)
        {
            cout << "A and B are equal" << endl;
        }
        else
        {
            cout << "A and B are not equal" << endl;
        }
    }
};

int main()
{
    // A num;
    // num.input();
    // B num1;
    // num1.add();
    // num1.diff();
    // C num2;
    // num2.mul();
    // num2.div();
    D num3;
    num3.input();
    num3.add();
    num3.diff();
    num3.mul();
    num3.div();
    num3.great();
    num3.equal();
}