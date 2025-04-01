#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int number, guess, attempts = 0;
    
    // Initialize random number generator
    std::srand(std::time(0));
    
    // Generate a random number between 1 and 100
    number = std::rand() % 100 + 1;
    
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have picked a number between 1 and 100. Try to guess it!" << std::endl;
    
    // Loop for the user to keep guessing until correct
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < number) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > number) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != number);

    return 0;
}
