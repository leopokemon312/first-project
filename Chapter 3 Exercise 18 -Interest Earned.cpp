#include <iostream>
#include <cmath> // To use the pow function

using namespace std;

int main() {
    // Declare variables
    double principal, rate, amountInSavings, interest;
    int timesCompounded;

    // Get input from the user
    cout << "Enter the principal: $";
    cin >> principal;
    cout << "Enter the interest rate (as a percentage, e.g., 4.25 for 4.25%): ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert the interest rate to a decimal
    rate = rate / 100;

    // Calculate the amount in savings after one year
    amountInSavings = principal * pow((1 + rate / timesCompounded), timesCompounded);

    // Calculate the interest earned
    interest = amountInSavings - principal;

    // Display the results
    cout << "Interest Rate:       " << rate * 100 << "%" << endl;
    cout << "Times Compounded:    " << timesCompounded << endl;
    cout << "Principal:           $" << principal << endl;
    cout << "Interest:            $" << interest << endl;
    cout << "Amount in Savings:   $" << amountInSavings << endl;

    return 0;
}
