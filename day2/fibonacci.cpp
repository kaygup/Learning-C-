#include <cstdio>
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>

std::vector<int> savenum;

using namespace std;




int main() {
    int nums;
    int last = 0;
    int femboy = 1;
    cout << "How many numbers?: ";
    cin >> nums;
  
    savenum.push_back(0);
    savenum.push_back(1);
  
    for (int i = 0; i < nums; i++) {
        int sigma = last + femboy;
        last = femboy;
        femboy = sigma;
        cout << sigma << endl;
        savenum.push_back(sigma);
    }




    string file;
    char choice;
    cout << "Would you like to save the output in a txt file? y/n: ";
    cin >> choice;
  
    if (choice == 'Y' || choice == 'y') {
        cout << "What would you like to name the file?: ";
        cin >> file;
        file.append(".txt");
        ofstream fileo(file);
      
        for (int num : savenum) {
            fileo << num << endl;
        }
    }
    







    return 0;
}
