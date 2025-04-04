#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
// tiny calculator program
using namespace std;

int main() {
    char operato;
    cout << "What operator do you want to use?: ";
    cin >> operato;
    double num1;
    double num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    

    switch (operato) {
        case '+': {
            cout << fixed << setprecision(2);
            double result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        }
        case '-': {
            cout << fixed << setprecision(2);
            double result2 = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result2 << endl;
            break;
        }
        case '*': {
            cout << fixed << setprecision(2);
            double result3 = num1 * num2;
            cout << num1 << " x " << num2 << " = " << result3 << endl;
            break;
        }
        case '/': {
            cout << fixed << setprecision(2);
            double result4 = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result4 << endl;
            break;
        }
        default: {
            cout << "Invalid Operator" << endl;
        }
    }
    return 0;
}
