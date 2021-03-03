#include <iostream>
#include<iomanip>
using namespace std;

int main () 
{
// MITCHELL VAN LOON
// entering the doubles between 0 and 100
double num1 = rand() % 100;    
double num2 = rand() % 100;
double num3 = rand() % 100;
double sum;
// declaring the sum and average
sum = num1 + num2 + num3;
cout << num1  << "\n";
cout << num2  << "\n";
cout << num3 << "\n";
// setting the decimal to two places and displaying the total
cout << "the sum is " <<  std::fixed << std::setprecision(2) <<sum << "\n"; 
return 0;
}
