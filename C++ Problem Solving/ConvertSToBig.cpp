#include <iostream>
using namespace std;

char Convert(char name){
    char ans = name-'a'+'A';
    return ans;
}


    int main(){
        char name;
        cout<<"Enter the characters: ";
        cin>>name;
        cout<<Convert(name);

        return 0;
    }