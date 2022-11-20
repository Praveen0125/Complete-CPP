#include<iostream>
using namespace std;
class praveen
{
private:
    string tv;
public:
    void show()
    {
        cout<<"What are you watching: "<<endl;
        cin>>tv;
        cout<<"I am watching "<<tv<<endl;
    }
    friend void ankush(praveen r); //Freind function
};

//Freind function declaration

void ankush(praveen r)
{
    cout<<"Ankush is also watching "<<r.tv<<endl;
}

int main()
{
    praveen p;
    p.show();
    ankush(p);
    return 0;
}