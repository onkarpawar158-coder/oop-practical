
#include <iostream>
using namespace std;

class A {
public:
    // Default constructor
    A() {
        cout << "Default constructor of class A" << endl;
    }

    // Parameterized constructor
    A(int x) {
        cout << "Parameterized constructor of class A" << endl;
    }

    // Copy constructor
    A(const A &obj1) {
        cout << "Copy constructor of class A" << endl;
    }

    // Destructor
    ~A() {
        cout << "Destructor of class A" << endl;
    }
};

class B {
public:
    // Default constructor
    B() {
        cout << "Default constructor of class B" << endl;
    }

    // Parameterized constructor
    B(int x) {
        cout << "Parameterized constructor of class B" << endl;
    }

    // Copy constructor
    B(const B &obj1) {
        cout << "Copy constructor of class B" << endl;
    }

    // Destructor
    ~B() {
        cout << "Destructor of class B" << endl;
    }
};

class C : public A, public B {
public:
    // Default constructor
    C() : A(), B() {
        cout << "Default constructor of class C" << endl;
    }

    // Parameterized constructor
    C(int x) : A(x), B(x) {
        cout << "Parameterized constructor of class C" << endl;
    }

    // Copy constructor
    C(const C &obj1) : A(obj1), B(obj1) {
        cout << "Copy constructor of class C" << endl;
    }

    // Destructor
    ~C() {
        cout << "Destructor of class C" << endl;
    }
};

int main() {
    cout << "\nProgram starting..." << endl;

    cout << "\nFirst object created:" << endl;
    C c1;

    cout << "\nSecond object created:" << endl;
    C c2(10);

    cout << "\nThird object created:" << endl;
    C c3(c1);

    return 0;
}
