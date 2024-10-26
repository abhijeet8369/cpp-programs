#include <iostream>
using namespace std;

class SumCalculator {
    int num;
    int sum;

public:
    SumCalculator(int n) : num(n), sum(0) {
        for (int i = 1; i <= num; ++i) {
            sum += i;
        }
    }

    SumCalculator(const SumCalculator &obj) {
        num = obj.num;
        sum = obj.sum;
    }

    void displaySum() const {
        cout << "The sum of all positive integers up to " << num << " is: " << sum << endl;
    }
};

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    SumCalculator original(n);
    original.displaySum();

    SumCalculator copy = original;
    copy.displaySum();

    return 0;
}
