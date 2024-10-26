#include <iostream>
using namespace std;

class NaturalSum {
private:
    int n;

public:
    NaturalSum() {
        cout << "Enter a positive integer: ";
        cin >> n;
    }

    void displaySum() {
        int sum = n * (n + 1) / 2;
        cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    NaturalSum naturalSum;
    naturalSum.displaySum();

    return 0;
}
