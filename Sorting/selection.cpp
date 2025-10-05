#include <iostream>
using namespace std;

int main() {

//   int arr[6] = {10, 8, 2, 3,9, 7};

int arr[1000];
int n;
cout<<"Enter your size of array number: ";
cin>>n;
cout<<"Enter the elements: ";
for(int i=0; i<n; i++)
cin>>arr[i];

  for(int i=0; i<n-1; i++){
    int index = i;
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[index])
        index=j;
    }

    swap(arr[i], arr[index]);
  }

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  
}