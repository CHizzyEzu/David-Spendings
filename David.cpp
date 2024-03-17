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
    
    double taxitemFan, taxitemCharger, taxitemJuice, taxitemChoco;

    itemFan = 53.89;
    itemCharger = 26.62;
    itemJuice = 15.20;
    itemChoco = 3;
    salesTax = 0.0432

    taxitemFan = (53.89 * 0.0432) + 53.89;
    taxitemCharger = (26.62 * 0.0432) + 26.62;
    taxitemJuice = (15.20 * 0.0432) +15.20;
    taxitemChoco = 3; //No tax

    itemTotal = itemFan + itemCharger + itemJuice + itemChoco;
    itemAvg = (itemFan + itemCharger + itemJuice + itemChoco) / 4;
    taxTotal = (taxitemFan + taxitemCharger + taxitemJuice + taxitemChoco);

// Output statements Pre-Tax
    cout << "David went going to the store " << endl;
    cout << "Before tax his items cost the following amount:  " << endl;
    cout << "Fan: " << setprecision(2) << setw(4) << itemFan << endl;
    cout << "Charger: " << setprecision(2) << setw(4) << itemCharger << endl;
    cout << "Juice: " << setprecision(2) << setw(4) << itemJuice << endl;
    cout << "Chocolate: " << setprecision(2) << setw(4) << itemChoco << endl;
    cout << "Total Pre-Tax: " << setprecision(2) << setw(8) << itemTotal << endl;
    cout << "-----------------------------------------------------------------  " << endl;
    
// Skipping lines
    cout << "\n\n\n\n\n"; 

// Output Statemnet Post tax
    cout << "David was charged a sales tax of 4.32%  " << endl;
    cout << "After tax the cost of the items David bought as follows:  " << endl;
    cout << "Fan (Post-Tax): " << setprecision(2) << setw(4) << taxitemFan << endl;
    cout << "Charger (Post-Tax): " << setprecision(2) << setw(4) << taxitemCharger << endl;
    cout << "Juice (Post-Tax): " << setprecision(2) << setw(4) << taxitemJuice << endl;
    cout << "Chocolate (Post-Tax): " << setprecision(2) << setw(4) << taxitemChoco << endl;
    cout << "Tax Total: " << setprecision(2) << setw(8) << taxitemFan << endl;

    return 0;
}
