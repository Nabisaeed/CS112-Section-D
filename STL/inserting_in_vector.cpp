// C++ Program starts here

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare and initialize a vector v1 with 5 elements: 0, 1, 2, 3, 4
    vector<int> v1(5);

    // Initialize the elements of v1 with their indices
    for (int i = 0; i < 5; i++) {
        v1[i] = i;
    }

    // Print the elements of vector v1 before insertion
    for (int n : v1) {
        cout << n << " ";
    }
    cout << endl;

    // Insert 100 at the beginning of v1, 5 times
    v1.insert(v1.begin(), 5, 100);

    // Print the elements of vector v1 after insertion
    cout << "The values after insertion are: " << endl;
    for (int n : v1) {
        cout << n << " ";
    }
    cout << endl;

    // Return 0 to indicate successful execution
    return 0;
}
