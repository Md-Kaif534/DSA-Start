#include <iostream>
using namespace std;
int main()
{
    int days;
    cout<<"Enter your number (1-7): ";
    cin>>days;

    switch(days){
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;
        default:

        cout<<"The number is not matched please give me correct number.";
    }    
    

}