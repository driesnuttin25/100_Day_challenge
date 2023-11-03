#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

struct Question {
    std::string questionText;
    std::vector<std::string> answers;
    int correctAnswerIndex;
    std::string hint;
};

void displayQuestion(const Question& q) {
    std::cout << q.questionText << std::endl;
    for (int i = 0; i < q.answers.size(); i++) {
        std::cout << i + 1 << ". " << q.answers[i] << std::endl;
    }
}

int main() {
    std::vector<Question> questions = {
        {"Which planet is known as the Red Planet?", {"Earth", "Mars", "Venus", "Jupiter"}, 1, "Hint: It's the fourth planet from the Sun."},

        {"What is the largest planet in our solar system?", {"Mars", "Venus", "Jupiter", "Saturn"}, 2, "Hint: It's named after the king of the Roman gods."},

        {"Which electronic component is used to store energy in an electric field?", {"Transistor", "Resistor", "Diode", "Capacitor"}, 3, "Hint: It's often used in circuits to smooth voltage fluctuations."},

        {"Which planet is known for its prominent ring system?", {"Earth", "Mars", "Saturn", "Neptune"}, 2, "Hint: Its rings are primarily made of ice particles with a smaller amount of rocky debris and dust."},

        {"What is the basic building block of a digital circuit?", {"Transistor", "Inductor", "Capacitor", "Diode"}, 0, "Hint: It can act as a switch and amplify signals."},
    };




    int score = 0;
    for (const auto& q : questions) {
        displayQuestion(q);

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
            std::cout << q.hint << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;
        }

        if(stoi(choice) - 1 == q.correctAnswerIndex) {
            std::cout << "Correct!" << std::endl;
            score++;
        } else {
            std::cout << "Wrong. The correct answer is: " << q.answers[q.correctAnswerIndex] << std::endl;
        }
    }

    if(score == 5){

        std::cout << "PERFECT SCORE!!! You got all questions correct out of " << questions.size() << std::endl;
    }
    else if(score > 3){

        std::cout << "Your score is: " << score << " out of " << questions.size() << ". Close but not perfect! try again next time!" << std::endl;
    }
    else{

        std::cout << "Your score is: " << score << " out of " << questions.size() << ". You'll do better next time for sure!" << std::endl;
    }

    return 0;
}
