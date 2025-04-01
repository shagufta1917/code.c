#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation, choice;

    do {
        cout << "Welcome to the Simple Calculator!" << endl;

        // Get user input
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the operator (+, -, *, /):\n ";
        cin >> operation;

        cout << "Enter the second number: ";
        cin >> num2;

        // Perform the calculation based on the operator
        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Error: Invalid operator!" << endl;
        }

        // Ask the user if they want to continue
        cout << "Would you like to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator! Goodbye!" << endl;

    return 0;
}
