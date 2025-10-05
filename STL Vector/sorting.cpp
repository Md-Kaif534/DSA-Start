// ascending order

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {30, 10, 50, 20, 40};

    sort(v.begin(), v.end());   // sort in ascending
    sort(v.begin(), v.end(), greater<int>());   // sort in descending

    for(int x : v) cout << x << " ";
    return 0;
}
