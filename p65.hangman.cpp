#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Function to display the current guessed word with underscores
void displayWord(const string &word, const vector<bool> &guessed)
{
    for (size_t i = 0; i < word.length(); ++i)
    {
        if (guessed[i])
        {
            cout << word[i] << " ";
        }
        else
        {
            cout << "_ ";
        }
    }
    cout << endl;
}

// Function to check if all letters are guessed
bool isWordGuessed(const vector<bool> &guessed)
{
    return all_of(guessed.begin(), guessed.end(), [](bool b)
                  { return b; });
}

int main()
{
    // Word list
    vector<string> words = {"hangman", "computer", "programming", "gpt", "openai", "language"};

    // Initialize random seed
    srand(time(0));
    string word = words[rand() % words.size()];

    vector<bool> guessed(word.length(), false);
    vector<char> wrongGuesses;
    int maxAttempts = 6;
    int attemptsLeft = maxAttempts;

    cout << "=== Hangman Game ===\n";

    while (attemptsLeft > 0)
    {
        cout << "\nWord: ";
        displayWord(word, guessed);

        cout << "Wrong guesses: ";
        for (char ch : wrongGuesses)
            cout << ch << " ";
        cout << "\nAttempts left: " << attemptsLeft << "\n";

        cout << "Enter a letter: ";
        char guess;
        cin >> guess;
        guess = tolower(guess);

        bool correct = false;
        for (size_t i = 0; i < word.length(); ++i)
        {
            if (word[i] == guess && !guessed[i])
            {
                guessed[i] = true;
                correct = true;
            }
        }

        if (!correct)
        {
            // Check for repeated wrong guess
            if (find(wrongGuesses.begin(), wrongGuesses.end(), guess) == wrongGuesses.end())
            {
                wrongGuesses.push_back(guess);
                attemptsLeft--;
            }
            else
            {
                cout << "You already guessed that letter!\n";
            }
        }

        if (isWordGuessed(guessed))
        {
            cout << "\nCongratulations! You guessed the word: " << word << endl;
            return 0;
        }
    }

    cout << "\nGame Over! The word was: " << word << endl;
    return 0;
}
