// C++ Program starts here
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    // Declaring an empty vector v2 with size 5
    vector<int> v2(5);

    // Taking input for the elements of v2 from the user
    for(int i = 0; i < 5; i++) {
        cin >> v2[i];
    }

    // Declaring and initializing a vector v3 with three elements
    vector<int> v3;
    v3.push_back(10);
    v3.push_back(20);
    v3.push_back(30);

    // Printing the elements of v2
    for(int n : v2) {
        cout << n << "    " << endl;
    }

    // Printing the elements of v3
    for(int n : v3) {
        cout << n << endl;
    }

    return 0;
}
