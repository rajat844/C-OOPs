#include <iostream>

using namespace std;

class Base {
private:
    int value;

public:
    Base()
        : value{ 0 } {
        cout << "Base no-args conatructor" << endl;
    }
    Base(int x)
        : value{ x } {
        cout << "Base(int) overloaded constructor" << endl;
    }
    Base(const Base& other)
        : value(other.value) {
        cout << "Base copy constructor" << endl;
    }
    Base& operator=(const Base& rhs) {
        cout << "Base operator" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
    ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base {
private:
    int doubled_value;

public:
    Derived()
        : Base{}, doubled_value{ 0 }
    {
        cout << "derived no-args constructor" << endl;
    }
    Derived(int x)
        : Base{ x }, doubled_value{ x * 2 }
    {
        cout << "Derived(int) overloaded constructor" << endl;
    }
    Derived(const Derived& other)
        : Base(other), doubled_value{ other.doubled_value }
    {
        cout << "Derived copy constructor";
    }
    Derived& operator=(const Derived& rhs) {
        cout << "drived operator" << endl;
        if (this == &rhs)
            return *this;
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }

    ~Derived() { cout << "derived destructor" << endl; }
};

int main() {
    // Base b;
    //Base b{100};
    //Derived d;
    // Derived d{1000};
    // Base b{1000};
    // Base b1{b};
    // b = b1;
    Derived d(100);
    Derived d1;
    d = d1;

    return 0;
}