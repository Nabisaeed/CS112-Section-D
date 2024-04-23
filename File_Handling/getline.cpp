// C++ Program starts here
#include <iostream>
using namespace std;

int main()
{
    // Declaration of variable
    string name;

    // Prompting user to enter their name
    cout << "Enter your name: " << endl;
    // Allowing spaces in name by using getline
    getline(cin, name);

    // Displaying the entered name
    cout << name << endl;

    // Exiting the program
    return 0;
}
