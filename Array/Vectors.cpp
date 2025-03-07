#include <iostream>
#include <vector>

using namespace std;
int main() {
    //syntax
    //vector <int> vec; //size = 0
    //vec = {2, 5, 9};
    vector<int> vec(5, 1); // vec(size, value on every index)
    cout << vec[3] << endl;
    //size
    cout << "size : " << vec.size() << endl;
    // add element at the end
    vec.push_back(45);
    cout << "size: " << vec.size() << endl;
    //delete last index value
    vec.pop_back();

    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
    // give front and back value
    cout << vec.front() << endl;
    vec.push_back(45);
    cout << vec.back() << endl;

    // get value at any index
    cout << vec.at(4) << endl;
    return 0;
}