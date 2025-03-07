#include <iostream>
#include <vector>
using namespace std;

// only one unique number in array without repitition
// bitwise operator : any number 'n' , n^n = 0,, n^0 = 0 (X-OR)
int main() {
    vector<int> vec(5, 0);
    for (int i = 0; i<vec.size(); i++) {
        cin >> vec.at(i);
    }

    //cout << vec.back();
    int ans = 0;
    for (int num : vec) {
        ans ^= num; // x-or
    }
    cout << ans << endl;
    return 0;
}