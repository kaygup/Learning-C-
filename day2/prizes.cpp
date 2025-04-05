#include <cstdlib>
#include <iostream>
#include <ctime>


using namespace std;

int main() {
    srand(time(0));
    int randm = rand() % 5 +1;

    switch (randm) {
        case 1:
        cout << "You win a car" << endl;
        break;
        case 2:
        cout << "You win a pack of meth" << endl;
        break;
        case 3:
        cout << "You win an airplane" << endl;
        break;
        case 4:
        cout << " You win an apple" << endl;
        break;
        case 5:
        cout << "You win a sticker" << endl;
        break;
    }

    return 0;
}
