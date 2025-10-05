#include <iostream>
#include <vector>
using namespace std;

bool divide(const vector<int>& arr) {
    long long total_sum = 0;
    for (int x : arr) total_sum += x;        // <-- compute total_sum first

    long long prefix = 0;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        prefix += arr[i];
        if (prefix * 2 == total_sum) return true; // left sum == right sum
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements in array: ";
    for (int i = 0; i < n; ++i) cin >> v[i];

    cout << divide(v) << '\n'; // prints 1 (true) or 0 (false)
}
