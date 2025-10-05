#include <iostream>
using namespace std;
int main()
{
    // int package = 20;
    int package;
    cout<<"Please give your amount: ";
    cin>>package;
    if(package>15)
    {
        cout<<"Accepted";
    }
    else
    {
        cout<<"rejected";
    }
}