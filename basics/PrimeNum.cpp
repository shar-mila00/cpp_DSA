#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    bool isPrime = true;

    for (int i = 2; i*i <= num; i++) {
        if (num%i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not a prime number" <<endl;
    }
    return 0;
}