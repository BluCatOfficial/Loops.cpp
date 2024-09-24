#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
// Lets say the user is guessing a number between 1 and 100

srand(static_cast<unsigned int>(time(0)));

int randomNum = rand() % 100 + 1;
int userGuess;
int guessCount = 0;

cout << "Welcome user, lets begin on guessing a number" << endl;

// Now for our loops
do {
    cout << "Enter your guess (1-100): ";
    cin >> userGuess;
    guessCount++;

    if (userGuess > randomNum) {
        cout << "Too high, try again." << endl;
    } else if (userGuess < randomNum) {
cout << "Too low, try again." << endl;

    }
}
    // This will make it continue until the user guesses correctly
while (userGuess != randomNum);

//Once the right guess is made..
cout << "Congratulations! You guessed the number correctly." << endl;

return 0;


    
}

