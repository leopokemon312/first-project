







#include <iostream>  // Needed for input and output

using namespace std;

int main() {
    // Variables for the gallons of gas and miles driven
    double gallonsOfGas = 15.0;  // Gallons of gasoline the car holds
    double milesDriven = 375.0;  // Miles the car can travel before refueling

    // Calculate miles per gallon (MPG)
    double milesPerGallon = milesDriven / gallonsOfGas;

    // Display the result
    cout << "The car gets " << milesPerGallon << " miles per gallon (MPG)." << endl;

    return 0;  // End of program
}
