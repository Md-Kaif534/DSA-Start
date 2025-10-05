#include <iostream>
using namespace std;
int main()
{
  int n, sum, i;
  
  cout<<"Enter your number: ";
  cin>>n;
  sum=0;

  for(i=1; i<=n; i=i+1)
  {
    sum = sum+i;
  }

  cout<<sum;
}