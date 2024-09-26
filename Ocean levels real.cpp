


#include <iostream>  // Needed for input and output

using namespace std;

int main() {
    // Declare a variable for the ocean rise rate
    double riseRate = 1.5;  // in millimeters per year

    // Calculate future rise in ocean level
    double riseIn5Years = riseRate * 5;
    double riseIn7Years = riseRate * 7;
    double riseIn10Years = riseRate * 10;

    // Display the results
    cout << "The ocean's level will be higher than the current level by:\n";
    cout << riseIn5Years << " millimeters in 5 years.\n";
    cout << riseIn7Years << " millimeters in 7 years.\n";
    cout << riseIn10Years << " millimeters in 10 years.\n";

    return 0;  // End of program
}
