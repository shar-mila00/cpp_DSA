#include <iostream>
#include <vector>
using namespace std;

int main() {
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
    // two pointers method
    int m = 0, n = N-1;
    bool isSum = false;
    int sum = 0;
    while (m < n) {
        sum = nums[m] + nums[n];
        if (sum == S) {
            isSum = true;
            cout << (m+1) << " ";
            cout << (n+1) << endl;
            break;
        } else if (sum > S) {
            n--;
        } else if (sum < S){
            m++;
        }
    }

    if (isSum == false) {
        cout << -1 << endl;
    }
    return 0;
}