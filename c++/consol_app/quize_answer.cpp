#include <iostream>
#include <vector>
using namespace std;

struct Question {
    string questionText;
    vector<string> possibleAnswers;
    int correctAnswerIndex;
};

int main() {
    vector<Question> quiz = {
        {"What is the capital of France?", {"1. Berlin", "2. Madrid", "3. Paris", "4. Rome"}, 3},
        {"Which planet is known as the Red Planet?", {"1. Earth", "2. Mars", "3. Jupiter", "4. Venus"}, 2},
        {"Who wrote 'Romeo and Juliet'?", {"1. Charles Dickens", "2. Jane Austen", "3. William Shakespeare", "4. Mark Twain"}, 3}
    };

    int score = 0;
    int userAnswer;

    cout << "Welcome to the Quiz!" << endl;

    for (int i = 0; i < quiz.size(); ++i) {
        cout << endl << "Question " << i + 1 << ": " << quiz[i].questionText << endl;
        for (int j = 0; j < quiz[i].possibleAnswers.size(); ++j) {
            cout << quiz[i].possibleAnswers[j] << endl;
        }

        cout << "Enter the number of your answer: ";
        cin >> userAnswer;

        if (userAnswer == quiz[i].correctAnswerIndex) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer was " << quiz[i].correctAnswerIndex << "." << endl;
        }
    }

    cout << endl << "Quiz Over!" << endl;
    cout << "Your final score is: " << score << " out of " << quiz.size() << "." << endl;

    return 0;
}
