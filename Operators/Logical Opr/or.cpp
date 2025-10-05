#include <iostream>
using namespace std;

int main() {

    char name;
    cout<<"Enter the characters: ";
    cin>>name;

    if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
    cout<<"vowel";
    else
    cout<<"consonant";
}