#include <iostream>
using namespace std;

// Function prototype for addition

typedef int (*pointer)(int, int); 
int add(int, int);

// Function to perform calculations using function pointers
void calculator(int a, int b, pointer p1) {
    cout << "The addition of two numbers is : " << p1(a, b) << endl;
}

int main (){
    
    // Declaring pointer for storing function address 
   pointer p1=&add;  // assigning address of function add
    
    calculator(20, 50, p1); // calling function calculator 
}

// Function definition for addition
int add(int a, int b) {
    return a + b;
}
