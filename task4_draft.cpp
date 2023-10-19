#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task
{
    string description;
    bool completed;
};
void add_task(vector<Task>& tasks, const string& description);
void view_tasks(const vector<Task>& tasks);
void mark_completed(vector<Task>& tasks, int index);
void remove_task(vector<Task>& tasks, int index);

int main()
{
    vector<Task>tasks;

    while (true)
        {
        cout<<endl<<"To-Do List Manager";
        cout<<endl<<"1. Add Task";
        cout<<endl<<"2. View Tasks";
        cout<<endl<<"3. Mark Task as Completed";
        cout<<endl<<"4. Remove Task";
        cout<<endl<<"5. Exit";

        int choice;
        cout<<endl<<"*********Enter your choice from 1 to 5*********"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:// To Add Tasks
                {
                    string description;
                    cout << "Enter the task description: ";
                    cin.ignore();
                    getline(cin, description);
                    add_task(tasks, description);
                    cout<<"Task is added."<<endl;
                }
                break;

            case 2:// To View Tasks
                view_tasks(tasks);
                break;

            case 3:// To Mark Task as Completed
                {
                    int index;
                    cout<<"Enter the index of the task to mark as completed: ";
                    cin>>index;
                    mark_completed(tasks, index);
                }
                break;

            case 4:// To Remove Task
                {
                    int index;
                    cout << "Enter the index of the task to remove: ";
                    cin >> index;
                    remove_task(tasks, index);
                    cout << "Task is removed."<<endl;
                }
                break;

            case 5:// Exit
                cout << "Exiting the program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
                break;
        }
    }

    return 0;
}

// Function to add a task to the list
void add_task(vector<Task>& tasks, const string& description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
}

// Function to view all the tasks with their status
void view_tasks(const vector<Task>& tasks) {
    cout << "\nList of the task:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].description;
        if (tasks[i].completed) {
            cout << " - Completed";
        }
        cout << endl;
    }
}

// Function to mark a task as completed
void mark_completed(vector<Task>& tasks, int index)
{
    if (index >= 1 && index <= static_cast<int>(tasks.size()))
    {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed.\n";
    }
    else
        cout << "Invalid index. Please enter a valid index.\n";
}

// Function to remove a task from the list
void remove_task(vector<Task>& tasks, int index)
{
    if (index >= 1 && index <= static_cast<int>(tasks.size()))
    {
        tasks.erase(tasks.begin() + index - 1);
    }
    else
        cout << "Invalid index. Please enter a valid index.\n";
}

