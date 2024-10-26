#include <iostream>
using namespace std;

class A {
protected:
    int dataA;

public:
    A(int a) : dataA(a) {}

    void displayA() {
        cout << "Data from Class A: " << dataA << endl;
    }
};

class B : public A {
protected:
    int dataB;

public:
    B(int a, int b) : A(a), dataB(b) {}

    void displayB() {
        cout << "Data from Class B: " << dataB << endl;
    }
};

class C : public A {
protected:
    int dataC;

public:
    C(int a, int c) : A(a), dataC(c) {}

    void displayC() {
        cout << "Data from Class C: " << dataC << endl;
    }
};

class D : public A {
protected:
    int dataD;

public:
    D(int a, int d) : A(a), dataD(d) {}

    void displayD() {
        cout << "Data from Class D: " << dataD << endl;
    }
};

class E : public B {
protected:
    int dataE;

public:
    E(int a, int b, int e) : B(a, b), dataE(e) {}

    void displayE() {
        cout << "Data from Class E: " << dataE << endl;
    }
};

int main() {
    A objA(10);
    B objB(10, 20);
    C objC(10, 30);
    D objD(10, 40);
    E objE(10, 20, 50);

    objA.displayA();
    objB.displayB();
    objC.displayC();
    objD.displayD();
    objE.displayE();
    objE.displayA();

    return 0;
}
