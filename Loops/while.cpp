#include <iostream>
using namespace std;

int main() {

    int i, n;
    cout<<"Enter the numbers: ";
    cin>>n;

    i=1;
    while(i<=10){
        cout<<n<<"*"<<i<<"="<<n*i;
        i=i+1;
        cout<<endl;
    }
    
}