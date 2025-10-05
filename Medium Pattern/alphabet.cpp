#include <iostream>
using namespace std; 

int main() {
    int i, j;

    for(i=1; i<=5; i++){
        char letter = 'a' + i-1;
        for(j=1; j<=i; j++){
            cout<<letter<<" ";
        }
        cout<<endl;
    }
}