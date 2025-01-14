#include <iostream>
using namespace std;

class Base {
protected:
    int num1;

public:

    Base(int a) : num1(a) {}
};

class Derived1 : public Base {
protected:
    int num2;

public:
    Derived1(int a, int b) : Base(a), num2(b) {}
};

class Derived2 : public Derived1 {
public:
    Derived2(int a, int b) : Derived1(a, b) {}

    void displaySum() {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Derived2 obj(a, b);
    obj.displaySum();

    return 0;
}
