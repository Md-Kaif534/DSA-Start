#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    vector <int> v1(5,3);
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl;
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    //update value
    v[1]=5;
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;

    vector<int>v3={1,2,4,5,7};
    cout<<v3.size();

    //delete value from vector

    vector<int> vnew;
    vnew.push_back(10);
    vnew.push_back(15);
    vnew.push_back(18);
    vnew.push_back(41);
    vnew.push_back(50);
    vnew.pop_back();
    cout<<"Size of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

    //erase the alternate value
    vnew.erase(vnew.begin()+1);
    cout<<"Size of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

    // print the elemnets

    for(auto i=0; i<vnew.size(); i++)
    {
        cout<<vnew[i]<<" ";
        
    }
    cout<<endl;


    // insert the value in vector

    vnew.insert(vnew.begin()+1, 50);
    for(auto i=0; i<vnew.size(); i++)
    {
        cout<<vnew[i]<<" ";
    }
}