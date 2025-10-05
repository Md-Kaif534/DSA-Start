#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int rem, ans=0;
   

     while(num!=0){
        rem=num%10;
        num/=10;
        ans=rem+ans;
     }
     cout<<ans<<endl;
}