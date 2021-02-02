#include <iostream>
#include<iomanip>
using namespace std;

int main () 
{
   
//variables to hold the meal price, the tip amount and the tax amount
double mealprice = 88.67, tax, tip, totalbill;

// calculating the variables
tax = mealprice * 0.0675;
tip = mealprice * .2;
totalbill = tax + tip + mealprice;

//displaying the results and rounding them
std::cout << "tax: $" << std::fixed << std::setprecision(2) << tax << endl;
std::cout << "tip: $" << std::fixed << std::setprecision(2) << tip << endl;
std::cout << "total bill: $" << std::fixed << std::setprecision(2) << totalbill << endl;
return 0;
}
