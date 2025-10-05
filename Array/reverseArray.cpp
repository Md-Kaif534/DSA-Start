#include <iostream>
using namespace std;

int main() {
    int arr[6] = {23, 32, 43, 4, 67, 65};

    int start=0, end=5;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<6; i++)
    cout<<arr[i]<<" ";
}