#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
// While loops
using namespace std;

int main() {
    string name;

    while(name.empty()) {
        cout << "Enter your name: ";
        getline(cin, name);
    }

    cout << "Hello, " << name << endl;


    return 0;
}
