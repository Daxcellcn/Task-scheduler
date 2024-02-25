#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    string name;
    int priority; // 1 to 5, where 5 is highest
    string deadline;

    Task(string n, int p, string d) : name(n), priority(p), deadline(d) {}
};

class TaskScheduler {
private:
    vector<Task> tasks;

public:
    void addTask() {
        string name, deadline;
        int priority;

        cout << "Enter task name: ";
        cin.ignore(); // Ignore any previous newline character
        getline(cin, name); // Allowing spaces in task name
        cout << "Enter task priority (1-5): ";
        cin >> priority;
        while (priority < 1 || priority > 5) {
            cout << "Priority must be between 1 and 5. Please enter again: ";
            cin >> priority;
        }
        cout << "Enter task deadline (YYYY-MM-DD): ";
        cin >> deadline;
        // Add task to the vector
        tasks.push_back(Task(name, priority, deadline));
        // Sort tasks by priority
        sortTasksByPriority();
    }

    void displayTasks() {
        if (tasks.empty()) {
            cout << "No tasks to display." << endl;
            return;
        }
        cout << "Tasks:" << endl;
        for (const auto& task : tasks) {
            cout << "Name: " << task.name << ", Priority: " << task.priority << ", Deadline: " << task.deadline << endl;
        }
    }

    void editTask(int index) {
        if (index < 0 || index >= tasks.size()) {
            cout << "Invalid task index." << endl;
            return;
        }
        cout << "Enter new task name: ";
        cin.ignore(); // Ignore any previous newline character
        getline(cin, tasks[index].name); // Allowing spaces in task name
        cout << "Enter new task priority (1-5): ";
        cin >> tasks[index].priority;
        while (tasks[index].priority < 1 || tasks[index].priority > 5) {
            cout << "Priority must be between 1 and 5. Please enter again: ";
            cin >> tasks[index].priority;
        }
        cout << "Enter new task deadline (YYYY-MM-DD): ";
        cin >> tasks[index].deadline;
        // Resort tasks after editing
        sortTasksByPriority();
        cout << "Task edited successfully." << endl;
    }

private:
    void sortTasksByPriority() {
        sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {
            return a.priority > b.priority; // Sort tasks by priority (higher first)
        });
    }
};

int main() {
    TaskScheduler scheduler;

    // Interactive task addition
    int numTasks;
    cout << "Enter the number of tasks to add: ";
    cin >> numTasks;
    for (int i = 0; i < numTasks; ++i) {
        cout << "Task " << i + 1 << ":" << endl;
        scheduler.addTask();
    }

    // Displaying tasks
    scheduler.displayTasks();

    // Example: Editing task at index 0
    int editIndex;
    cout << "Enter the index of the task to edit: ";
    cin >> editIndex;
    scheduler.editTask(editIndex);
    scheduler.displayTasks();

    return 0;
}
