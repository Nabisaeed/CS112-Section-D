// C++ Program starts here

#include <iostream>
#include <vector>
using namespace std;

// Function to alter elements of a vector by doubling their indices
void alter_vector(vector<int> &vec) {
    // Loop through each element of the vector
    for (int i = 0; i < vec.size(); i++) {
        // Alter the element by multiplying its index by 2
        vec[i] = i * 2;
        // Print the altered element
        cout << vec[i] << " ";
    }
    // Print newline after printing all altered elements
    cout << endl;
}

int main() {
    // Declare and initialize a vector v1 with 5 elements: 0, 1, 2, 3, 4
    vector<int> v1(5);

    // Initialize the elements of v1 with their indices
    for (int i = 0; i < 5; i++) {
        v1[i] = i;
    }

    // Print the values of v1 before alteration
    cout << "The values before alteration are: " << endl;
    for (int n : v1) {
        cout << n << " ";
    }
    cout << endl;

    // Call alter_vector function to alter v1
    cout << "The values after alteration are: " << endl;
    alter_vector(v1);

    // Print the values of v1 after alteration
    cout << "The values of original vector are: " << endl;
    for (int n : v1) {
        cout << n << " ";
    }
    cout << endl;

    // Return 0 to indicate successful execution
    return 0;
}
