#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sales, advancePay, commissionRate, commission, remainingPay;
    char another;

    do {
        // Ask for sales amount
        cout << "Enter the salesperson's monthly sales: ";
        cin >> sales;

        // Ask for advance pay
        cout << "Enter the amount of advanced pay for this salesperson: ";
        cin >> advancePay;

        // Determine commission rate based on sales
        if (sales < 10000)
            commissionRate = 0.05;
        else if (sales < 15000)
            commissionRate = 0.10;
        else if (sales < 18000)
            commissionRate = 0.12;
        else if (sales < 22000)
            commissionRate = 0.14;
        else
            commissionRate = 0.16;

        // Calculate commission and remaining pay
        commission = sales * commissionRate;
        remainingPay = commission - advancePay;

        // Output results
        cout << fixed << setprecision(2);
        cout << "\nPay Results\n";
        cout << "-----------\n";
        cout << "Sales: $" << sales << endl;
        cout << "Commission Rate: " << commissionRate << endl;
        cout << "Commission: $" << commission << endl;
        cout << "Advanced Pay: $" << advancePay << endl;

        if (remainingPay >= 0)
            cout << "Remaining Pay: $" << remainingPay << endl;
        else
            cout << "Amount to Reimburse Crazy Al's: $" << -remainingPay << endl;

        // Ask if they want to enter another agent
        cout << "\nDo you want to enter another salesperson? (y/n): ";
        cin >> another;

    } while (another == 'y' || another == 'Y');

    return 0;
}
