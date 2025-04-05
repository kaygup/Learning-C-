#include <cstdlib>
#include <iostream>
#include <ctime>


using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 +1;
    int tries;
    string difficulty;
    int guess;
    cout << "Welcome to our number guessing game, please enter the desired difficulty:" << endl;
    cout << "easy/hard: ";
    cin >> difficulty;

    if (difficulty == "easy" || difficulty == "Easy") {
    tries = 10;
    cout << "You chose the easy difficulty!" << endl;
    cout << "A random number has been chosen!" << endl;
    while (guess != number && tries > 0){
        cout << "Chose a number from 1 - 100: ";
        cin >> guess;
        if (guess > number) {
            cout << "Your number is too big" << endl;
            tries -= 1;
            cout << "You have " << tries << " tries left, try again!" << endl;
        }else {
            cout << "Your number is too small" << endl;
            tries -= 1;
            cout << "You have " << tries << " tries left, try again!" << endl;
        }  
    }
        if (guess == number) {
            cout << "Congratulations you won!" << endl;
        }
    }
    if (difficulty == "hard" || difficulty == "Hard") {
        tries = 5;
        cout << "You chose the hard difficulty!" << endl;
        cout << "A random number has been chosen!" << endl;
        while (guess != number && tries > 0){
            cout << "Chose a number from 1 - 100: ";
            cin >> guess;
            if (guess > number) {
                cout << "Your number is too big" << endl;
                tries -= 1;
                cout << "You have " << tries << " tries left, try again!" << endl;
            }else {
                cout << "Your number is too small" << endl;
                tries -= 1;
                cout << "You have " << tries << " tries left, try again!" << endl;
            }
            
        }
            if (guess == number) {
                cout << "Congratulations you won!" << endl;
            }
        }
    return 0;
}
