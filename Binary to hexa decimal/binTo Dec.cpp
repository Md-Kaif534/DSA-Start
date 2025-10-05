#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the numbers: ";
    cin>>num;

    int rem, ans=0, mul=1;

    while(num>0){
        rem=num%10;
        num/=10;
        ans=rem*mul+ans;
        mul*=2;
    }
    cout<<ans<<endl;

}