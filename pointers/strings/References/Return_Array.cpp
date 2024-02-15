// C++ Program starts here

#include <iostream>
using namespace std;

// Function to dynamically allocate memory for an integer array of size n and populate it with user input
int * fun1(int n){
    // Dynamically allocate memory for an array of integers of size n
    int * arr = new int[n];

    // Populate the array with user input
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Return the pointer to the dynamically allocated array
    return arr;
}

int main() {
    int size;

    // Prompt the user to enter the size of the array
    cout << "Enter the size of the array : " << endl;

    // Read the size of the array from the user
    cin >> size;

    // Call fun1 function to dynamically allocate memory for an integer array and populate it
    int * p = fun1(size);

    // Print the elements of the array
    for(int i = 0; i < size; i++){
        cout << p[i] << endl;
    }

    // Deallocate the memory allocated for the array
    delete [] p;

    // Indicate successful program execution
    return 0;
}
