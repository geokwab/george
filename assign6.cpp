#include <iostream>
using namespace std;

// Function for Part A: Print a single multiplication table
void printSingleTable(int number)
{
    cout << "\nMultiplication Table for " << number << ":\n";

    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

// Function for Part B: Print multiplication tables from 1 to N
void printTablesUpToN(int n)
{
    for (int num = 1; num <= n; num++)
    {
        cout << "\nMultiplication Table for " << num << ":\n";

        for (int i = 1; i <= 12; i++)
        {
            cout << num << " x " << i << " = " << num * i << endl;
        }

        cout << "---------------------------" << endl;
    }
}

int main()
{
    int number, n;

    // Part A
    cout << "Enter a number for its multiplication table: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Error: Please enter a positive integer." << endl;
        return 0;
    }

    printSingleTable(number);

    // Part B
    cout << "\nEnter N to print multiplication tables from 1 to N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Please enter a positive integer." << endl;
        return 0;
    }

    printTablesUpToN(n);

    return 0;
}