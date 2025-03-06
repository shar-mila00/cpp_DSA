#include <iostream> 
using namespace std;
 int main() {
    // sum of odd numbers from 1 to N
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i%2 != 0) {
            sum += i;
        }
    }
    cout << "Sum is : " << sum <<endl;
    return 0;
 }