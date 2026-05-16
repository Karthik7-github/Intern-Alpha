#include <iostream>
#include <vector>
using namespace std;

struct Question {
    string question;
    vector<string> options;
    int correctAnswer;
};

int main() {
    vector<Question> quiz = {
        {"What is 2 + 2?", {"1", "2", "4", "5"}, 2},
        {"Capital of India?", {"Mumbai", "Delhi", "Chennai", "Kolkata"}, 1},
        {"C++ is a ___ language?", {"Markup", "Programming", "Scripting", "Design"}, 1}
    };

    int score = 0, answer;

    cout << "📝 Online Quiz\n";

    for (int i = 0; i < quiz.size(); i++) {
        cout << "\nQ" << i + 1 << ": " << quiz[i].question << endl;

        for (int j = 0; j < quiz[i].options.size(); j++) {
            cout << j << ". " << quiz[i].options[j] << endl;
        }

        cout << "Enter your answer: ";
        cin >> answer;

        if (answer == quiz[i].correctAnswer) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }
    }

    cout << "\n🎯 Final Score: " << score << "/" << quiz.size() << endl;

    return 0;
}