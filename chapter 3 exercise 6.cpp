


#include <iostream>
using namespace std;

int main() {
    // Define the ingredients for 48 cookies
    const double sugarPer48Cookies = 1.5;
    const double butterPer48Cookies = 1.0;
    const double flourPer48Cookies = 2.75;
    const int cookiesPerRecipe = 48;

    // Ask the user how many cookies they want to make
    int desiredCookies;
    cout << "How many cookies would you like to make? ";
    cin >> desiredCookies;

    // Calculate the required ingredients based on the desired number of cookies
    double sugarNeeded = (sugarPer48Cookies / cookiesPerRecipe) * desiredCookies;
    double butterNeeded = (butterPer48Cookies / cookiesPerRecipe) * desiredCookies;
    double flourNeeded = (flourPer48Cookies / cookiesPerRecipe) * desiredCookies;

    // Display the required amounts of each ingredient
    cout << "To make " << desiredCookies << " cookies, you will need:" << endl;
    cout << sugarNeeded << " cups of sugar" << endl;
    cout << butterNeeded << " cups of butter" << endl;
    cout << flourNeeded << " cups of flour" << endl;

    return 0;
}
