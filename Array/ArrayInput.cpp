#include <iostream> 
using namespace std;
int main() {
    int size;
    cin >> size;

    int arr[size];
    //input
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    //output
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // size of array
    cout << (sizeof(arr)/sizeof(int)) << endl; // 20/4 = 5
    cout << sizeof(arr) << endl; // 5*4 = 20 bytes
    cout << sizeof(int) << endl; //4 bytes
    return 0;
}