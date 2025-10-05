#include <iostream>
using namespace std;

int main() {
    
    int n, pow, i, num;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"ENter your pow: ";
    cin>>pow;

    num=n;
    for(i=1; i<pow; i=i+1){
        num=num*n;
    }

    cout<<num;

}