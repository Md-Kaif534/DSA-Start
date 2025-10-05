#include <iostream>

using namespace std;

int main(){
    long long n,i,fact;

    cout<<"Enter the number: ";
    cin>>n;
  
    fact = 1;

    for(i=1; i<=n; i=i+1){
        fact= fact*i;
    }

    cout<<fact;
}