#include <iostream>
using namespace std;

void Swap(int &a, int &b){  //pass by reference
    int c;
    c=a;
    a=b;
    b=c;
}

void Swap(float &c, float &d){
    int r = c;
    c=d;
    d=r;
}

int main() {
    int a, b;
    cout<<"Enter the two Value: ";
    cin>>a>>b;
    Swap(a, b);
    cout<<a<<" "<<b<<" ";

    float f1=5.7, f2=6.7;
    Swap(f1,f2);
    cout<<f1<<" "<<f2<<" ";

}