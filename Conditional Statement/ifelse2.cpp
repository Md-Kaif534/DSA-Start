#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your student marks: ";
    cin>>marks;
    if(marks>33){ /*if the if statement are single line then non compulasry uses curly bracket.*/
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
}