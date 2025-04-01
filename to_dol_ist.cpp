#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\nTo-Do List Menu:" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. Remove Task" << endl;
    cout << "3. View Tasks" << endl;
    cout << "4. Exit" << endl;
    cout << "Please choose an option (1-4): ";
}

// Function to add a task to the to-do list
void addTask(vector<string>& tasks) {
    string task;
    cout << "Enter the task description: ";
    cin.ignore(); // To clear the input buffer
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully!" << endl;
}

// Function to remove a task from the to-do list
void removeTask(vector<string>& tasks) {
    int taskIndex;
    cout << "Enter the task number to remove (1-" << tasks.size() << "): ";
    cin >> taskIndex;

    // Check if the index is valid
    if (taskIndex < 1 || taskIndex > tasks.size()) {
        cout << "Invalid task number!" << endl;
    } else {
        tasks.erase(tasks.begin() + taskIndex - 1);
        cout << "Task removed successfully!" << endl;
    }
}

// Function to view the tasks in the to-do list
void viewTasks(const vector<string>& tasks) {
    if (tasks.empty()) {
        cout << "Your to-do list is empty!" << endl;
    } else {
        cout << "\nYour To-Do List:" << endl;
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }
}

int main() {
    vector<string> tasks; // Vector to store tasks
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:  // Add Task
                addTask(tasks);
                break;
            case 2:  // Remove Task
                if (tasks.empty()) {
                    cout << "No tasks to remove!" << endl;
                } else {
                    removeTask(tasks);
                }
                break;
            case 3:  // View Tasks
                viewTasks(tasks);
                break;
            case 4:  // Exit
                cout << "Exiting the To-Do List application. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
