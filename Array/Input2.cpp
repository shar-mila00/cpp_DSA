#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;
int main() {
    int size;
    cin >> size; // size of array

    cin.ignore(); // ignore the new line character after size

    string line;
    getline(cin, line); // take the entire array as an input as string

    istringstream iss(line); // convert string into object

    //Extract integers from the string stream using std::istream_iterator<int>(iss).
    //This creates an iterator that reads integers from the input stream iss (which contains the entire line of numbers). It starts reading from the beginning of iss.
    //std::istream_iterator<int>() (second instance): This represents an end iterator, which is a special iterator that signifies the end of input.
    //Store the extracted numbers into a std::vector<int>.
   
    vector<int> arr((istream_iterator<int>(iss)), istream_iterator<int>());

    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}