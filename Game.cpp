#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    char playAgain = 'Y';
    srand(time(0)); 

    while (playAgain == 'y' || playAgain == 'Y') {
        int numberToGuess = rand() % 1000 + 1;
        int guess;

        cout << "I have a number between 1 and 1000." << endl;
        cout << "Can you guess my number?" << endl;
        cout << "Please type your first guess: ";
        cin >> guess;

        while (guess != numberToGuess) {
            if (guess < numberToGuess) {
                cout << "Too low. Try again: ";
            } else {
                cout << "Too high. Try again: ";
            }
            cin >> guess;
        }

        cout << "Excellent! You guessed the number!" << endl;
        cout << "Would you like to play again (y or n)? ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}
