#include<bits/stdc++.h>
using namespace std;

int main() {
    int random_num, guess, attempts = 0;
    srand(time(0));
    random_num = rand() % 100 + 1;
    cout << "Guess the number between 1 and 100." << endl;
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess > random_num) {
            cout << "Too high! Try again." << endl;
        } else if (guess < random_num) {
            cout << "Too low! Try again." << endl;
        }
    } while (guess != random_num);
    
    cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
    return 0;
}
