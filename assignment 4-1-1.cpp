#include <iostream>
using namespace std;

int main() {
int number1, number2;

cout << "Enter an integer: ";
cin >> number1;
cout << "Enter an integer: ";
cin >> number2;

// which is greater
if (number1 > number2) 
cout << "the larger number is " << number1 << " the smaller number is " << number2 << endl;
else
cout << " the larger number is " << number2 << " the smaller number is " << number1 << endl;
return 0;
}
