#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // To create and write

    // ofstream newFile("D:\\FileHandling.txt");
    // cout<<"File Created.."<<endl;

    // newFile<<"CPP was made by Bjarne Stoustrup in 1987 as C with Class.";

    // newFile.close();

    //To read file
    
    string str;
    ifstream newFile("D:\\FileHandling.txt");
    while (getline(newFile,str))
    {
        cout<<str<<endl;
    }
    newFile.close();
}