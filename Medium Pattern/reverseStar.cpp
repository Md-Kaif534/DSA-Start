#include <iostream>
using namespace std;

int main() {
    int i, j;

    for(i=1; i<=5; i++){
        // for(j=5; j>=i; j=j-1){
        for(j=1; j<=5-(i-1); j=j+1){
            cout<<'#'<<" ";
        }
        cout<<endl;
    }
}