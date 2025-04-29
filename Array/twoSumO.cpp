#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // mapping
    unordered_map<int, int> m;
    
    int arr[2];
    for (int i = 0; i < 2; i++) {
        cin >> arr[i];
    }

    cout << endl;

    int N = arr[0];
    int S = arr[1]; //target sum
    
    //input array
    int nums[N];
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    } 
    
    cout << endl;

    //optimized way
    int first = 0, sec = 0;
    bool isSum = false;
    for (int i = 0; i < N; i++) {
        first = nums[i];
        sec = S - first;

        if (m.find(sec) != m.end()) {
            cout << m[sec]+1 << " ";
            cout << i+1 << endl;
            isSum = true;
            break;
        }
        m[first] = i;
    }

    if (isSum == false) {
        cout << -1 << endl;
    }
    return 0;
}