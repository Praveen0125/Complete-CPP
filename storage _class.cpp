#include<iostream>
using namespace std;
void fun()
{
    int a=10;
    static int b=10;
    cout<<a<<" "<<b<<endl;
    a++;
    b++;
}

int main()
{
    fun();
    fun();
    fun();
    fun();
    return 0;
}