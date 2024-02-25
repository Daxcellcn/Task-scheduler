# Task-scheduler
Task scheduler


This C++ program is a task scheduler application. It allows users to add tasks with their names, priorities, and deadlines, display the list of tasks, and edit existing tasks. Here's a breakdown of how to use it:

1.Adding Tasks:

When you run the program, it prompts you to enter the number of tasks you want to add.
For each task, it asks you to input the task name, priority (between 1 and 5), and deadline (in the format YYYY-MM-DD).
After adding all the tasks, they are sorted based on their priorities, with higher priority tasks appearing first.

2.Displaying Tasks:

Once tasks are added, the program displays them, showing the task name, priority, and deadline for each task.
If no tasks have been added, it displays a message indicating that there are no tasks to display.

3.Editing Tasks:

After displaying the tasks, the program prompts you to enter the index of the task you want to edit (starting from 0).
You can then input the new name, priority, and deadline for the selected task.
After editing, the tasks are sorted again by priority, and a message is displayed indicating that the task was edited successfully.
Here's how you can use the program:

Compile the code using a C++ compiler (e.g., g++).
Run the compiled executable.
Follow the prompts to add tasks, display them, and edit tasks as needed.

For example:

Enter the number of tasks to add: 3
Task 1:
Enter task name: Study for exam
Enter task priority (1-5): 4
Enter task deadline (YYYY-MM-DD): 2024-03-15
Task 2:
Enter task name: Finish project
Enter task priority (1-5): 5
Enter task deadline (YYYY-MM-DD): 2024-03-20
Task 3:
Enter task name: Call mom
Enter task priority (1-5): 3
Enter task deadline (YYYY-MM-DD): 2024-03-10

Tasks:
Name: Finish project, Priority: 5, Deadline: 2024-03-20
Name: Study for exam, Priority: 4, Deadline: 2024-03-15
Name: Call mom, Priority: 3, Deadline: 2024-03-10

Enter the index of the task to edit: 1
Enter new task name: Study for final exam
Enter new task priority (1-5): 5
Enter new task deadline (YYYY-MM-DD): 2024-04-10
Task edited successfully.

Tasks:
Name: Study for final exam, Priority: 5, Deadline: 2024-04-10
Name: Finish project, Priority: 5, Deadline: 2024-03-20
Name: Call mom, Priority: 3, Deadline: 2024-03-10

This program provides a simple way to manage tasks and deadlines, allowing you to keep track of your activities effectively.
