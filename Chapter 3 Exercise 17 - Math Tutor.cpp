#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate two random numbers between 100 and 999
    int num1 = rand() % 900 + 100; // Random number between 100 and 999
    int num2 = rand() % 900 + 100; // Random number between 100 and 999

    // Display the problem
    cout << "Solve the following addition problem:\n\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------\n";

    // Pause for the student to work on the problem
    cout << "Press Enter to see the solution...";
    cin.ignore();  // Wait for the user to press Enter

    // Display the solution
    cout << "\nThe correct solution is:\n\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------\n";
    cout << "  " << num1 + num2 << endl;

    return 0;
}
