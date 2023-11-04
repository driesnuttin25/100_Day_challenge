#include <iostream>
#include <vector>
#include <string>
#include <chrono>

class Question {
private:
    std::string questionText;
    std::vector<std::string> answers;
    int correctAnswerIndex;
    std::string hint;

public:
    Question(std::string qText, std::vector<std::string> ans, int correctIdx, std::string h) :
        questionText(qText), answers(ans), correctAnswerIndex(correctIdx), hint(h) {}

    void display() const {
        std::cout << questionText << std::endl; // This line was missing

        for (size_t i = 0; i < answers.size(); i++) {
            std::cout << i + 1 << ". " << answers[i] << std::endl;
        }
    }

    bool verifyAnswer(int choice) const {
        return choice == correctAnswerIndex;
    }

    std::string getCorrectAnswer() const {
        return answers[correctAnswerIndex];
    }

    std::string getHint() const {
        return hint;
    }
};

class Quiz {
private:
    std::vector<Question> questions;
    int score;

public:
    Quiz() : score(0) {}

    void addQuestion(Question q) {
        questions.push_back(q);
    }

    void displayScore() {
        if(score == questions.size()){
            std::cout << "PERFECT SCORE!!! You got all questions correct out of " << questions.size() << std::endl;
        } else if(score > 3) {
            std::cout << "Your score is: " << score << " out of " << questions.size() << ". Close but not perfect! Try again next time!" << std::endl;
        } else {
            std::cout << "Your score is: " << score << " out of " << questions.size() << ". You'll do better next time for sure!" << std::endl;
        }
    }

    void takeQuiz() {
        for (const auto& q : questions) {
            q.display();

            std::cout << "Enter your choice (you have 30 seconds): ";

            auto start = std::chrono::high_resolution_clock::now();
            std::string choice;
            std::cin >> choice;

            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> elapsed = end - start;

            if(elapsed.count() >= 30.0) {
                std::cout << "Time's up! Moving on to the next question." << std::endl;
                continue;
            }

            if(choice == "hint") {
                std::cout << q.getHint() << std::endl;
                std::cout << "Enter your choice: ";
                std::cin >> choice;
            }

            if(q.verifyAnswer(stoi(choice) - 1)) {
                std::cout << "Correct!" << std::endl;
                score++;
            } else {
                std::cout << "Wrong. The correct answer is: " << q.getCorrectAnswer() << std::endl;
            }
        }
    }
};

int main() {
    Quiz quiz;

    quiz.addQuestion({"Which planet is known as the Red Planet?", {"Earth", "Mars", "Venus", "Jupiter"}, 1, "Hint: It's the fourth planet from the Sun."});
    quiz.addQuestion({"What is the largest planet in our solar system?", {"Mars", "Venus", "Jupiter", "Saturn"}, 2, "Hint: It's named after the king of the Roman gods."});
    quiz.addQuestion({"Which electronic component is used to store energy in an electric field?", {"Transistor", "Resistor", "Diode", "Capacitor"}, 3, "Hint: It's often used in circuits to smooth voltage fluctuations."});
    quiz.addQuestion({"Which planet is known for its prominent ring system?", {"Earth", "Mars", "Saturn", "Neptune"}, 2, "Hint: Its rings are primarily made of ice particles with a smaller amount of rocky debris and dust."});
    quiz.addQuestion({"What is the basic building block of a digital circuit?", {"Transistor", "Inductor", "Capacitor", "Diode"}, 0, "Hint: It can act as a switch and amplify signals."});
    quiz.takeQuiz();
    quiz.displayScore();

    return 0;
}
