// C++ Program starts here
#include <iostream>
#include <vector>
#include <algorithm> // Including algorithm header for reverse function
using namespace std;

int main()
{
    // Initializing a vector v1 with 5 elements: 1, 2, 3, 4, 5
    vector<int> v1(5); //1,2,3,4,5

    // Filling the vector with consecutive integers starting from 1
    for(int i = 0; i < 5; i++) {
        v1[i] = i + 1;
    }

    // Printing the values before reversing the vector
    cout << "The values before reversing the vector are: " << endl;
    for(int n : v1) {
        cout << n << "  ";
    }
    cout << endl;

    // Reversing the elements of the vector
    reverse(v1.begin(), v1.end());

    // Printing the values after reversing the vector
    cout << "The values after reversing the vector are: " << endl;
    for(int n : v1) {
        cout << n << "  ";
    }
    cout << endl;
    
    return 0;
}
