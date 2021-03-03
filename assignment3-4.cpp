#include <iostream>
#include<iomanip>
using namespace std;

int main () 
{
// MITCHELL VAN LOON
double june, july, august, avg, sum;
cout << "enter the amount of rainfall for june \n";
cin >> june;
cout << "enter the amount of rainfall for july \n";
cin >> july;
cout << "enter the amount of rainfall for august \n";
cin >> august;
sum = june + july + august;
avg =  sum / 3;
cout << " the average amount of rainfall for these months is " << avg << " Inches";
}