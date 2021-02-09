#include <iostream>
#include<iomanip>
using namespace std;

int main () 
{
// MITCHELL VAN LOON
double fahrenheit, celcius;
cout << "enter the temperature in celcius\n";
cin >> celcius;
fahrenheit = (9/5.0) * celcius + 32;
cout << " degrees celcius " << celcius << " is " << fahrenheit << "  degrees farenheit\n";
}
