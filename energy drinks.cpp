#include <iostream>  // Needed for input and output

using namespace std;

int main() {
    // Given data from the survey
    int totalCustomers = 16500;  // Total number of surveyed customers
    double energyDrinkPercent = 0.15;  // 15% purchase energy drinks
    double citrusDrinkPercent = 0.58;  // 58% prefer citrus flavor

    // Calculate the approximate number of customers who purchase energy drinks
    int energyDrinkCustomers = totalCustomers * energyDrinkPercent;

    // Calculate the number of customers who prefer citrus-flavored energy drinks
    int citrusDrinkCustomers = energyDrinkCustomers * citrusDrinkPercent;

    // Display the results
    cout << "Approximately " << energyDrinkCustomers
        << " customers purchase one or more energy drinks per week.\n";
    cout << "Approximately " << citrusDrinkCustomers
        << " customers prefer citrus-flavored energy drinks.\n";

    return 0;  // End of program
}
