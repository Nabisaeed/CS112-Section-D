// C++ Program starts here
#include <iostream>
using namespace std;

// Class A declaration
class A {
public:
    // Method in class A
    void sommethod() {
        cout << "This is Class A " << endl;
    }
};

// Class B declaration, inheriting publicly from class A
class B: public A {
public:
    // Method in class B
    void sommethode() {
        cout << "This is Class B " << endl;
    }
};

// Class C declaration, inheriting publicly from class A
class C: public A {
public:
    // Method in class C
    void sommethode1() {
        cout << "This is Class C " << endl;
    }
};

// Class D declaration, inheriting from class C and class B
class D: public C, public B {
public:
    // Method in class D
    void sommethode2() {
        cout << "This is Class D " << endl;
    }
};

// Class E declaration, inheriting from class D
class E: public D {
public:
    // Method in class E
    void sommethod() {
        cout << "This is Class E " << endl;
    }
};

// Main function
int main() {
    // Creating an object of class E
    E obj1;
    // Calling method from class E using object of class E
    obj1.sommethod();
    return 0;
}
