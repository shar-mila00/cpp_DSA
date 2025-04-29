#include <iostream>
using namespace std;

int main() {
    int a = 45;
    int* ptr = &a;
    cout << ptr << endl; // address of variable a
    cout << &a << endl; // address of variable a
    cout << &ptr << endl; // address of ptr

    //pointer to pointer
    int** ptr2 = &ptr;
    cout << ptr2 <<endl;
    return 0;
}