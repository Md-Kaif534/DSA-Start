#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Years: ";
    cin>>n;
    if(n%400==0){
        cout<<"Leap Year";
    }
    else if(n%4==0 && n%100!=0){
        cout<<"Leap Years";
    }
    else{
        cout<<"Not Leap year";
    }
}