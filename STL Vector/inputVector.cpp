#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the vector: ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter the values: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
        cout<<v[i]<<" ";
    }
}