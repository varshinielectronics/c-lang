#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice:" << endl;
    cout << "0: Rock" << endl;
    cout << "1: Paper" << endl;
    cout << "2: Scissors" << endl;
    cout << "Your choice: ";
    cin >> userChoice;

    // Validate input
    if (userChoice < 0 || userChoice > 2) {
        cout << "Invalid choice. Please enter 0, 1, or 2." << endl;
        return 1;
    }

    // Generate computer's choice
    srand(time(0)); // seed random number generator
    computerChoice = rand() % 3;

    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}
