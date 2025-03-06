#include <iostream>
using namespace std;

int main() {
    // if no value is given, it will print random garbage value
    // int age;    
    // cout << age << endl;

    int price;
    cout << "Enter the price : ";
    cin >> price;
    cout << "The price : " << price << endl;

    //operators
    // (int/int) gives int, otherwise float/double
    cout << (45/6.8f) <<endl; 

    //unary operators 
    // i++ : work then update,, ++i : update then work

    return 0;
}