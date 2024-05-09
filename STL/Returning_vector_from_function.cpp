// C++ Program starts here

#include <iostream>
#include <vector>
using namespace std;

// Function to alter elements of a vector by doubling their indices
vector<int> alter_vector(vector<int> &vec) {
    // Loop through each element of the vector
    for (int i = 0; i < vec.size(); i++) {
        // Alter the element by multiplying its index by 2
        vec[i] = i * 2;
    }
    // Return the modified vector
    return vec;
}

int main() {
    // Declare and initialize a vector v1 with 5 elements: 0, 1, 2, 3, 4
    vector<int> v1(5);

    // Initialize the elements of v1 with their indices
    for (int i = 0; i < 5; i++) {
        v1[i] = i;
    }

    // Declare a vector v2
    vector<int> v2;

    // Call alter_vector function with v1 and assign the returned vector to v2
    v2 = alter_vector(v1);

    // Print the elements of vector v2
    for (int n : v2) {
        cout << n << " ";
    }
    cout << endl;

    // Return 0 to indicate successful execution
    return 0;
}
