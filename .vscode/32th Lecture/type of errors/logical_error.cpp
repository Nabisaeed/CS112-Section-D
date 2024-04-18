// C++ Program starts here

#include <iostream>
using namespace std;

int main()
{
    // Declare an array of integers
    int arr[] = {20, 50, 18};

    // Declare a pointer and assign it the address of the first element of the array
    int *ptr = arr;

    // Output the value at the memory location pointed to by ptr + 4
    // Note: This is accessing memory beyond the bounds of the array, which is undefined behavior
    cout << *(ptr + 4) << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
