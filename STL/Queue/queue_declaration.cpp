// C++ Program starts here
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Create a queue of integers
    queue<int> Q1;

    // Add elements to the queue
    Q1.push(12);
    Q1.push(13);
    Q1.push(15);
    Q1.push(17);
    Q1.push(18);

    // Print the size of the queue
    cout << "The size of Queue is " << Q1.size() << endl;

    // Print and remove elements from the queue until it's empty
    while (!Q1.empty()) {
        // Print the value at the front of the queue
        cout << "The value at front is : " << Q1.front() << endl;
        
        // Remove the element at the front of the queue
        Q1.pop();
    }

    // End of the program
    return 0;
}
