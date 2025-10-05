#include <iostream>
using namespace std;

int Sum(int m, int n){
    int ans = m+n;
    return ans;
}

int Mul(int m, int n){
    int ans = m*n;
    return ans;
}

    int main(){
        int a,b;
        cout<<"Enter the 1st Number: ";
        cin>>a;
        cout<<"Enter the 2nd Number: ";
        cin>>b;
        cout<<Sum(a,b);
        cout<<endl;
        cout<<Mul(a,b);
    }

