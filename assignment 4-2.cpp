#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
int number1, number2, number3, low, high;
cout << "enter the first number";
cin >> number1;
cout << "enter the second number";
cin >> number2;
cout << "enter the third number";
cin >> number3;
if (number1 < number2)
{
low = number1;
high = number2;
}
else
{
low = number2;
high = number1;
}
if (number3 < low)
low = number3;
if (number3 > high)
high = number3;
cout << "the max is " << high;
cout << " the min is " << low;
return 0;
}
