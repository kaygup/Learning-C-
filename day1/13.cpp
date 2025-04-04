#include <cstdio>
#include <iostream>
#include <cmath>
// && AND
// || OR
// ! 
//a simple temperature conversion program
using namespace std;

int main() {
    double temp;
    char unit;
   
    cout << "Enter the Unit: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "Enter the Temperature: ";
        cin >> temp;
        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is: " << temp << endl;
    }else if (unit == 'C' || unit == 'c') {
        cout << "Enter the Temperature: ";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Temperature is: " << temp << endl;
    }else {
        cout << "Invalid input" << endl;
    }


    return 0;
}
