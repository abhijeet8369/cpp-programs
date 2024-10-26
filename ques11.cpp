#include <iostream>
using namespace std;

class PrimeChecker; 

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    friend class PrimeChecker;
};

class PrimeChecker {
public:
    bool isPrime(const Number& num) {
        if (num.value <= 1) {
            return false;
        }
        for (int i = 2; i * i <= num.value; ++i) {
            if (num.value % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Number number(num);
    PrimeChecker checker;

    if (checker.isPrime(number)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
