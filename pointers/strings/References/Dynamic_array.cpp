// C++ Program starts here
#include <iostream>
using namespace std;

int main() {
    // Prompt the user to enter the size of the array
    cout << "Enter the size of the array : " << endl;

    // Read the size of the array from the user
    int n;
    cin >> n;

    // Dynamically allocate memory for an integer array of size n
    int * arr = new int[n];

    // Initialize the first element of the array
    arr[0] = 202;

    // Print the first element of the array
    cout << arr[0] << endl;

    // Deallocate the memory allocated for the array
    delete[] arr;

    // Indicate successful program execution
    return 0;
}
