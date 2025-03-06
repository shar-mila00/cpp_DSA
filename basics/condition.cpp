#include <iostream>
using namespace std;

int main() {
    // float mark;
    // cout << "Enter the mark : ";
    // cin >> mark;

    // if (mark >= 90) {
    //     cout << "A" << endl;
    // } else if (mark >= 75 && mark < 90) {
    //     cout << "B" << endl;
    // } else {
    //     cout << "C" << endl;
    // } 

    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <='z') {
        cout << ch << " : lowercase" << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " : uppercase" << endl;
    } else {
        cout << "invalid" << endl;
    }

    //ternary (3) operation
    int num = 8;
    cout << (num >= 0 ? "positive" : "negative") << endl;
    return 0;
}