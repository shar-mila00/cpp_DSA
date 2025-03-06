#include <iostream>
using namespace std;

int main() {
    int age = 8;
    char letter = 'D'; // converts it's ASCII value into binary 0/1, size 1 byte

    cout << letter << endl;
    cout << sizeof(age) <<endl; //4 bytes

    // true 1, false 0
    bool isOk = true;
    cout << isOk << endl;
    // float : 4 bytes ,, must write f (7.98f)
    // double 8 bytes
    // bool 1 byte
    cout << 4.67 <<endl;  

    // type conversion (implicit : small one into big one , automatically by compiler)
    int value = letter; // char to int (1 byte to 4 bytes)
    cout << value <<endl; //ASCII value

    // type  casting (explicit : big data type into small one)
    double m = 98.5656;
    cout << (int) m <<endl;
    return 0;
}