// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     // cout<<"Enter your number: ";
//     // cin>>num;

//     for(int i=6; i<=60; i=i+6)
//     {
//         cout<<i<<" ";
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter your number: ";
    cin>>num;

    for(int i=1; i<=10; i=i+1)
    {
        cout<<num<<'*'<<i<<'='<<num*i<<endl;
    }
}