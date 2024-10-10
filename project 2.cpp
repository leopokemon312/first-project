#include <iostream>
#include <cmath>  // For the power function
using namespace std;

int main() {
    int operation;
    double num1, num2, result;
    char another;

    do {
        // Show the available operations
        cout << "Choose an operation:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Power\n";
        cout << "Enter the number of the operation: ";
        cin >> operation;

        // Get the two numbers from the user
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        // Perform the chosen operation
        if (operation == 1) {
            result = num1 + num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == 2) {
            result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == 3) {
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == 4) {
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            else {
                cout << "Error: Cannot divide by zero.\n";
            }
        }
        else if (operation == 5) {
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
        }
        else {
            cout << "Invalid choice. Please select a valid operation.\n";
        }

        // Ask the user if they want to do another calculation
        cout << "\nDo you want to do another calculation? (y/n): ";
        cin >> another;

    } while (another == 'y' || another == 'Y');

    return 0;
}
