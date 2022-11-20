#include<iostream>
using namespace std;

//function template

/* template <class A>
void getAnyData(A x, A y)
{
    cout<<x<<"\n"<<y<<endl;
}

int main()
{
    getAnyData(10,20);
    getAnyData(2.5,3.86);
    getAnyData('a','b');
    getAnyData("Praveen","Dubey");
} */

// class template

template <class A>
class print
{
    public:
    void get(A x, A y)
    {
        cout<<x<<endl<<y<<endl;
    }
};

int main()
{
    print <double> p;
    p.get(20.6,18.3);
    return 0;
}