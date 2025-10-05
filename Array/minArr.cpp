#include <iostream>
using namespace std;

int main() {
    int arr[5] = {23, 43, 4, 46, 67};
    int ans= INT8_MAX;
    // Min Value

    for(int i=0; i<=5; i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<ans;
    return 0;

}