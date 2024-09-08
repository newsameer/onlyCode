#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> myVector [5];
    cout << "Enter the element in vector :";
    cin >> myVector;

    // Print elements using range-based for loop
    cout << "Elements in the vector:" << endl;
    for (int x : myVector) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
