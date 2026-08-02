#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Student structure
struct Student
{
    string name;
    int id;
    vector<double> scores;
};

// Function to calculate average score
double calculateAverage(const Student& student)
{
    double sum = 0;

    for (int i = 0; i < student.scores.size(); i++)
    {
        sum += student.scores[i];
    }

    return sum / student.scores.size();
}

// Function to add a student
void addStudent(vector<Student>& students)
{
    Student student;

    cout << "Student name: ";
    cin.ignore();
    getline(cin, student.name);

    cout << "Student ID: ";
    cin >> student.id;

    int numberOfScores;

    cout << "How many scores? ";
    cin >> numberOfScores;

    for (int i = 0; i < numberOfScores; i++)
    {
        double score;

        cout << "Enter score " << i + 1 << ": ";
        cin >> score;

        student.scores.push_back(score);
    }

    students.push_back(student);

    cout << "Student \"" << student.name 
         << "\" added successfully." << endl;
}

// Function to display all students
void displayStudents(const vector<Student>& students)
{
    if (students.empty())
    {
        cout << "No students have been added yet." << endl;
        return;
    }

    cout << "\nStudent Records:\n";

    for (int i = 0; i < students.size(); i++)
    {
        cout << "\nName: " << students[i].name << endl;
        cout << "ID: " << students[i].id << endl;

        cout << "Scores: ";

        for (int j = 0; j < students[i].scores.size(); j++)
        {
            cout << students[i].scores[j] << " ";
        }

        cout << endl;

        cout << fixed << setprecision(2);
        cout << "Average: " << calculateAverage(students[i]) << endl;
    }
}

// Function to find and display average of a specific student
void findStudentAverage(const vector<Student>& students)
{
    int id;

    cout << "Enter student ID: ";
    cin >> id;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].id == id)
        {
            cout << fixed << setprecision(2);
            cout << students[i].name 
                 << "'s average score: "
                 << calculateAverage(students[i]) 
                 << endl;
            return;
        }
    }

    cout << "Error: Student ID not found." << endl;
}

// Function to display menu
void displayMenu()
{
    cout << "\n================================" << endl;
    cout << "   STUDENT RECORD SYSTEM MENU" << endl;
    cout << "================================" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Display all students" << endl;
    cout << "3. Calculate average score" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
}

int main()
{
    vector<Student> students;

    int choice;

    while (true)
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent(students);
                break;

            case 2:
                displayStudents(students);
                break;

            case 3:
                findStudentAverage(students);
                break;

            case 4:
                cout << "Goodbye!" << endl;
                return 0;

            default:
                cout << "Error: Invalid choice. Please select 1-4." << endl;
        }
    }

    return 0;
}