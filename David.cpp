// Quiz 1 Assignment Junior Ezuma-Ngwu
/* Calculating average cost of items David bought before tax and listing
prices of the items David bought before and after tax */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Variables and there declarations
    double itemFan, itemCharger, itemJuice, itemChoco, itemTotal, itemAvg, salesTax, taxTotal;
    
    double taxitemFan, taxitemCharger, taxitemJuice, taxitemChoco, taxitemAvg;

    itemFan = 53.89;
    itemCharger = 26.62;
    itemJuice = 15.20;
    itemChoco = 3;
    salesTax = 0.0432;

    taxitemFan = (53.89 * 0.0432) + 53.89;
    taxitemCharger = (26.62 * 0.0432) + 26.62;
    taxitemJuice = (15.20 * 0.0432) +15.20;
    taxitemChoco = 3; //No tax

    itemTotal = itemFan + itemCharger + itemJuice + itemChoco;
    itemAvg = itemTotal / 4;
    taxTotal = (taxitemFan + taxitemCharger + taxitemJuice + taxitemChoco);
    taxitemAvg = taxTotal / 4;

// Output statements Pre-Tax
    cout << "David went to the store " << endl;
    cout << "Before tax his items cost the following amount:  " << endl;
    cout << setw(4) << "Fan: " << setprecision(4) << setw(4) << itemFan << endl;
    cout << setw(4) << "Charger: " << setprecision(4) << setw(4) << itemCharger << endl;
    cout << setw(4) << "Juice: " << setprecision(4) << setw(4) << itemJuice << endl;
    cout << setw(4) << "Chocolate: " << setprecision(4) << setw(4) << itemChoco << endl;
    cout << setw(8) << "Total Pre-Tax: " << setprecision(4) << setw(4) << itemTotal << endl;
    cout << "-----------------------------------------------------------------  " << endl;
    
// Skipping lines
    cout << "\n\n\n\n\n"; 

// Output statemnet Post-tax
    cout << "David was charged a sales tax of 4.32%  " << endl;
    cout << "After tax the cost of the items David bought as follows:  " << endl;
    cout << setw(4) << "Fan (Post-Tax): " << setprecision(4) << setw(4) << taxitemFan << endl;
    cout << setw(4) << "Charger (Post-Tax): " << setprecision(4) << setw(4) << taxitemCharger << endl;
    cout << setw(4) << "Juice (Post-Tax): " << setprecision(4) << setw(4) << taxitemJuice << endl;
    cout << setw(4) << "Chocolate (Post-Tax): " << setprecision(2) << setw(2) << taxitemChoco << endl;
    cout << setw(8) << "Tax Total: " << setprecision(5) << setw(8) << taxTotal << endl;
    cout << "-----------------------------------------------------------------  " << endl;
    
// Skipping Lines
    cout << "\n\n\n\n";

// Averages calculated
    cout << "Average (Before-Tax): " << setprecision(4) << itemAvg << endl;
    cout << "Average (After-Tax): " << setprecision(4) << taxitemAvg << endl;
    return 0;
}
