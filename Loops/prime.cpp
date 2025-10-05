#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter your number: ";
  cin>>n; 
  
  if(n<2){
    cout<<"Not Prime";
    return 0;
  }

  else{
    for(int i=2; i<n; i=i+1){
        if(n%i==0){
            cout<<"Not a Prime number";
            return 0;
        }
        // else{
        //     cout<<"Prime Number";
        // }
    }
  }
   cout<<"Prime Number";
   return 0;
}