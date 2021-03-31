#include <iostream>
#include<iomanip>
using namespace std;
int main () 
{
// MITCHELL VAN LOON
// entering the doubles between 0 and 100
double v1 = rand() % 100;    
double v2 = rand() % 100;
double v3 = rand() % 100;
double sum, avg;
// declaring the sum and average
sum = v1 + v2 + v3;
avg = sum / 3;
cout << v1  << "\n";
cout << v2  << "\n";
cout << v3 << "\n";
// setting the decimal to five places and displaying the total
cout << "the sum is goint to be thing " <<  std::fixed << std::setprecision(5) <<sum << "\n"; 
cout << "the average is " <<  std::fixed << std::setprecision(5) << avg;
return 0;
}