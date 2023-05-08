#include <iostream>
using namespace std;

class Calculation {
public:
    int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
};

class Factorial : public Calculation {
public:
    void calculate() {
        int num;
        cout << "Enter a number to calculate its factorial: ";
        cin >> num;
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }
};

int main() {
    Factorial f1;
    f1.calculate();
     Factorial f2;
    f2.calculate();
     Factorial f3;
    f3.calculate();
    return 0;
}
