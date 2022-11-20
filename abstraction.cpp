#include <iostream>
using namespace std;
class Bank
{
private:
    int atmPin, Balance;

public:
    string BName, IFSC;
    long long int AccNumber;
    void details()
    {
        atmPin = 1111;
        Balance = 222200;
        BName = "PNB";
        IFSC = "PUNB0405100";
        AccNumber = 4051001700204134;
    }
    void getDetails()
    {
        cout << "Your Details are: " << endl;
        cout << "Bank Name: " << BName << endl;
        cout << "IFSC: " << IFSC << endl;
        cout << "Your Account number is: " << AccNumber << endl;
        cout << "Your Atm Pin is: " << atmPin << endl;
        cout << "Your Bank Balance is: " << Balance << endl;
    }
};

int main()
{
    Bank p;
    p.details();
    p.getDetails();
    cout << "Person B wants to access my details: " << endl;
    cout << "Details are: " << endl;
    cout << "Bank Name: " << p.BName << endl;
    cout << "IFSC: " << p.IFSC << endl;
    cout << "Account number is: " << p.AccNumber << endl;
    // cout<<"Atm Pin is: "<<p.atmPin<<endl;            not accessible
    // cout<<"Bank Balance is: "<<p.Balance<<endl;      not accessible
}