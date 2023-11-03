# Day 8: AI Quiz Application

Today, you'll be building a simple quiz application with questions and multiple choice answers. Here's the outline:

## Structure:

- Create an array (or a vector) of questions.
- Each question should have a string for the question itself and a corresponding array (or vector) of potential answers. Additionally, each question should have an identifier for the correct answer.

## User Interaction:

- Display the question to the user and list the multiple-choice options.
- Allow the user to choose an answer.
- Display whether the user was correct or not.
- Keep track of the user's score.

## Questions:

Aim for 5 questions. They can be about anything, but given your profile, maybe a mix of space, electronics, music, and dance?

## Extras (if time permits):

- Add a timer for each question. If the user doesn't answer within a given time, move to the next question.
- Provide a hint option.
- After the quiz ends, provide feedback based on the user's score.

Here's a basic skeleton to get you started:

```cpp
#include <iostream>
#include <vector>
#include <string>

struct Question {
    std::string questionText;
    std::vector<std::string> answers;
    int correctAnswerIndex;
};

void displayQuestion(const Question& q) {
    std::cout << q.questionText << std::endl;
    for (int i = 0; i < q.answers.size(); i++) {
        std::cout << i + 1 << ". " << q.answers[i] << std::endl;
    }
}

int main() {
    std::vector<Question> questions = {
        {"Which planet is known as the Red Planet?", {"Earth", "Mars", "Venus", "Jupiter"}, 1},
        // ... add more questions
    };

    int score = 0;
    for (const auto& q : questions) {
        displayQuestion(q);
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;
        
        if (choice - 1 == q.correctAnswerIndex) {
            std::cout << "Correct!" << std::endl;
            score++;
        } else {
            std::cout << "Wrong. The correct answer is: " << q.answers[q.correctAnswerIndex] << std::endl;
        }
    }

    std::cout << "Your score is: " << score << " out of " << questions.size() << std::endl;

    return 0;
}
