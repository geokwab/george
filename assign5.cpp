#include <iostream>
using namespace std;

// Function to print the first N Fibonacci numbers
void printFibonacci(int n)
{
    if (n <= 0)
    {
        cout << "Error: Number of terms must be positive." << endl;
        return;
    }

    int first = 0, second = 1, next;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << first << " ";
        }
        else if (i == 2)
        {
            cout << second << " ";
        }
        else
        {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }

    cout << endl;
}

// Function to check if a number is a Fibonacci number
void checkFibonacci(int number)
{
    if (number < 0)
    {
        cout << number << " is NOT a Fibonacci number." << endl;
        return;
    }

    int first = 0, second = 1, next;

    while (first < number)
    {
        next = first + second;
        first = second;
        second = next;
    }

    if (first == number)
    {
        cout << number << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << number << " is NOT a Fibonacci number." << endl;
    }
}

int main()
{
    int n, number;

    // Part A
    cout << "How many terms? ";
    cin >> n;

    printFibonacci(n);

    // Part B
    cout << "\nEnter a number to check: ";
    cin >> number;

    checkFibonacci(number);

    return 0;
}