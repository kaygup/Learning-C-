#include <cstdio>
#include <iostream>

using namespace std;
// if-statements :3
int main() {

    int age;
    cout << "How old are you?: ";
    cin >> age;
    if (age <= 17) {
        cout << "You are not old enough!" << endl;

    }else if (age >= 50) {
        cout << "Welcome to Lolihub" << endl;
    }else {
        cout << "Welcome to Pornhub" << endl;
    }

    return 0;
}
