#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

std::vector<int> savenum;
// loops inside of loops
using namespace std;

int main() {
    int rows;
    int columns;
    char symbol;
    cout << "What symbol do you want to print?: ";
    cin >> symbol;
    cout << "How many rows do you want to print?: ";
    cin >> rows;
    cout << "How many columns do you want to print?: ";
    cin >> columns;
    
    
    for(int x = 1; x <= rows; x++){

        for (int i = 1; i <= columns; i++) {
        cout << symbol << " ";
        }
    cout << "\n";
    }
    return 0;
}
