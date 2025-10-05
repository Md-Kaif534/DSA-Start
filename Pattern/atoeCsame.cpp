#include <iostream>
using namespace std;

int main(){
    int i; 
    char col;

    for(i=1; i<=5; i=i+1){
        for(col='a'; col<='e'; col=col+1){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}