#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function for addition
double add(double a, double b)
{
    return a + b;
}

// Function for subtraction
double subtract(double a, double b)
{
    return a - b;
}

// Function for multiplication
double multiply(double a, double b)
{
    return a * b;
}

// Function for division
double divide(double a, double b)
{
    return a / b;
}

// Function for modulus
int modulus(int a, int b)
{
    return a % b;
}

// Function for exponentiation
double exponent(double base, double power)
{
    return pow(base, power);
}

// Function to display menu
void displayMenu()
{
    cout << "\n============================" << endl;
    cout << "     SIMPLE CALCULATOR" << endl;
    cout << "============================" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exponentiation" << endl;
    cout << "7. Quit" << endl;
    cout << "Select an operation (1-7): ";
}

int main()
{
    int choice;

    while (true)
    {
        displayMenu();
        cin >> choice;

        if (choice == 7)
        {
            cout << "Goodbye!" << endl;
            break;
        }

        double num1, num2;

        switch (choice)
        {
            case 1:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " + " << num2 
                     << " = " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " - " << num2 
                     << " = " << subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " * " << num2 
                     << " = " << multiply(num1, num2) << endl;
                break;

            case 4:
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                if (num2 == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else
                {
                    cout << fixed << setprecision(2);
                    cout << "Result: " << num1 << " / " << num2 
                         << " = " << divide(num1, num2) << endl;
                }
                break;

            case 5:
            {
                int a, b;

                cout << "Enter first number: ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;

                if (b == 0)
                {
                    cout << "Error: Cannot perform modulus by zero." << endl;
                }
                else
                {
                    cout << "Result: " << a << " % " << b 
                         << " = " << modulus(a, b) << endl;
                }

                break;
            }

            case 6:
                cout << "Enter base number: ";
                cin >> num1;
                cout << "Enter exponent: ";
                cin >> num2;

                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " ^ " << num2 
                     << " = " << exponent(num1, num2) << endl;
                break;

            default:
                cout << "Error: Invalid choice. Select between 1 and 7." << endl;
        }
    }

    return 0;
}