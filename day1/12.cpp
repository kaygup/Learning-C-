#include <cstdio>
#include <iostream>
#include <cmath>
// logic
using namespace std;

int main() {
    int temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;
    if (temperature > 0 && temperature < 30) {
        cout << "The temperature is good" << endl;
    } else {
        cout << "The Temperature's bad chickenjockey" << endl;
    }
}
