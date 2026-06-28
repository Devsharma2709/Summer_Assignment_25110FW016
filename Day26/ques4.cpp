#include <iostream>
using namespace std;
int main() {
    int answer, score = 0;
    cout << "===== Welcome to the Quiz Application =====\n\n";
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\n4. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;
    cout << "\n5. Which symbol is used to end a C++ statement?\n";
    cout << "1. :\n2. ,\n3. ;\n4. .\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\n===== Quiz Result =====\n";
    cout << "Your Score: " << score << " out of 5\n";
    if (score == 5)
        cout << "Excellent! You got all answers correct.\n";
    else if (score >= 3)
        cout << "Good Job! You passed the quiz.\n";
    else
        cout << "Better luck next time!\n";
    return 0;
}