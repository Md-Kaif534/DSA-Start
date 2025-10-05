#include <iostream>>
using namespace std;

int main() {
    int a,b,c,d;
    cout<<"Enter the four no.: ";
    cin>>a>>b>>c>>d;

    if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
    cout<<1<<endl;
    else
    cout<<0<<endl;
}