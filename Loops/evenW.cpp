#include <iostream>
using namespace std;

int main() {

    int i, n;
    cout<<"Enter the numbers: ";
    cin>>n;

    i=1;
    while(i<=n){
        if(i%2==0){
            cout<<i<<" is a even number."<<endl;
        }
        else{
            cout<<i<<" is a odd number."<<endl;
        }
        i=i+1;
    }
}