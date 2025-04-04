#include <cstdio>
#include <iostream>

using namespace std;
// switches, basically else if but better
int main() {

    int day;
    cout << "Which day is it (number)?: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "it's monday" << endl;
            break;
        case 2:
            cout << "It's tuesday" << endl;
            break;
        case 3:
            cout << "it's wendesday" << endl;
            break;
        case 4:
            cout << "it's thursday" << endl;
            break;
        case 5:
            cout << "it's friday" << endl;
            break;
        case 6:
            cout << "it's saturday" << endl;
            break;
        case 7:
            cout << "it's Sunday" << endl;
            break;
    }

    return 0;
}
