#include <iostream>
using namespace std;

int main() {
    int i, j;

    for(i=1; i<=5; i++){
        for(j=i; j>=1; j=j-1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}