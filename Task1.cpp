#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int number = rand() % 100 + 1; // Random number between 1-100
    int guess, attempts = 0;

    cout << "🎯 Number Guessing Game (1-100)\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
            cout << "Too high!\n";
        else if (guess < number)
            cout << "Too low!\n";
        else
            cout << "🎉 Correct! You guessed in " << attempts << " attempts.\n";

    } while (guess != number);

    return 0;
}