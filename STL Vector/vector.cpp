#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> k;
    k.push_back(10);
    k.push_back(20);
    k.push_back(40);

    cout<<k.size()<<endl;

    for(int a:k){
        cout<<a<<" ";
    }
}