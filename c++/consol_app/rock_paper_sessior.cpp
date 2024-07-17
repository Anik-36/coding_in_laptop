#include <bits/stdc++.h>

using namespace std;
string getComputerChoice() {
    int randomChoice = rand() % 3; 
    switch (randomChoice) {
        case 0:
            return "rock";
        case 1:
            return "paper";
        case 2:
            return "scissors";
        default:
            return "rock"; 
    }
}

string determineWinner(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    } else if ((userChoice == "rock" && computerChoice == "scissors") ||
               (userChoice == "scissors" && computerChoice == "paper") ||
               (userChoice == "paper" && computerChoice == "rock")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    string userChoice;
    string computerChoice;

    srand(static_cast<unsigned int>(time(0)));

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice (rock, paper, or scissors): ";
    cin >> userChoice;

    while (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
        cout << "Invalid choice. Please enter rock, paper, or scissors: ";
        cin >> userChoice;
    }

    computerChoice = getComputerChoice();
    cout << "Computer chose: " << computerChoice << endl;

    string result = determineWinner(userChoice, computerChoice);
    cout << result << endl;

    return 0;
}
