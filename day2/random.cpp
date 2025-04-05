#include <cstdlib>
#include <iostream>
// random number generator

using namespace std;

int main() {
    srand(time(NULL));
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    cout << num1 << "\n" << num2 << "\n" << num3 << endl;


    return 0;
}
