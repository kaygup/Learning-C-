#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
// "useful" string methods
using namespace std;

int main() {
    string name;
    cout << "Enter thee name: ";
    getline(cin, name);
    if (name.length() > 12) {
        cout << "your name can not be over 12 characters long" << endl;
    }else if (name.empty()) {
        cout << "Please enter a name!!" << endl;
    }else {
        name.append("@gmail.com");
        name.insert(0, "S");
        cout << "Your username is now: " << name << endl;
    }

    return 0;
}
