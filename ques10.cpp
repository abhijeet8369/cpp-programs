#include <iostream>
using namespace std;

class Student {
public:
    inline void displaySum(int num1, int num2) {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    Student student;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    student.displaySum(a, b);

    return 0;
}
