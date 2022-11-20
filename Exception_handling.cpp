#include<iostream>
using namespace std;
int main()
{
    cout<<"Execution Started..."<<endl;
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    try
    {
        if (b==0)
        {
            throw b;
        }
        
        c=a/b;
        cout<<"Result: "<<c<<endl;
    }
    catch(int x)
    {
        cout<<"Can't Divide by "<<x<<endl;
    }
    cout<<"Execution ended..."<<endl;
}