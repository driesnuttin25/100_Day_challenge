# Day 8 (Revisited): Object-Oriented Programming in C++

## 1. Introduction to OOP
Object-Oriented Programming (OOP) is a programming paradigm that provides a means of structuring programs so that properties and behaviors are bundled into individual objects. In C++, you achieve this with classes and objects.

## 2. Classes and Objects
A class is a blueprint for creating objects, and an object is an instance of a class. For example, if "Car" is a class, then "Volvo" could be an object of that class.

## 3. Basic Syntax
```cpp
class Car {
    public:        // Access specifier
        std::string brand;   // Attribute (or data member)
        void honk() {        // Method (or member function)
            std::cout << "Tuut, tuut!\n";
        }
};

int main() {
    Car myCar;        // Create an object of Car
    myCar.brand = "Volvo";
    myCar.honk();     // Call the honk() method
    return 0;
}
```


## 4. Encapsulation
Encapsulation means binding the data (attributes) and the code (methods) together as a single unit. It also restricts direct access to some of the object's components, which is a means of preventing unintended interference and misuse of the data.

## 5. Task for Day 8 (Revisited):
- **Refactor the quiz game with OOP:** Create a class named `Quiz` that will handle all the functionalities related to the quiz game. Some suggested methods for the class could be:
  - `addQuestion()`: Adds a question to the quiz.
  - `displayQuestion()`: Displays a question from the quiz.
  - `takeQuiz()`: Handles the quiz-taking process, timing, etc.
  - `displayScore()`: Shows the user's score.
- **Encapsulation:** Ensure that the data members (attributes) of your class are protected from unwanted access. Use private and public access specifiers wisely.
- **Bonus:** Create a `Question` class that represents a single question. This class should have methods and attributes suitable for storing the question text, answer choices, correct answer, and hint. The `Quiz` class should then use a vector of `Question` objects.
