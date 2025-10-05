#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem, ans=0, mul=1;

    while(num>0){
        rem=num%2;
        num/=2;
        ans+=rem*mul;
        mul*=10;
    }
    cout<<ans<<endl;


}