#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>

std::vector<int> savenum;

using namespace std;

// continue skips the current thing while break just ends the loop





int main() {

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
          continue;  
           
        }
        cout << i << endl;

    }
    return 0;
}
