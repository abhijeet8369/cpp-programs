#include <iostream>
using namespace std;

class Swap {
private:
    int num1;
    int num2;

public:
    Swap(int a, int b) : num1(a), num2(b) {}

    void swapNumbers() {
        cout << "Before swapping: " << endl;
        cout << "Num1: " << num1 << ", Num2: " << num2 << endl;

        int temp = num1;
        num1 = num2;
        num2 = temp;

        cout << "After swapping: " << endl;
        cout << "Num1: " << num1 << ", Num2: " << num2 << endl;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Swap swapObj(a, b);
    swapObj.swapNumbers();

    return 0;
}
