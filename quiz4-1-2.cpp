#include <iostream>
using namespace std;

int main() {
double weight, distance;
double rate, totalcharge;
cout << "enter the weight ";
cin >> weight;
cout << "enter the distance ";
cin >> distance;

// determining which discount is applied
if ( weight <= 2 ) 
rate = 1.10;
else if ( weight <= 6 ) 
rate = 2.2;
else if (weight <= 10)
rate = 3.7;
else rate = 4.8
;
totalcharge = (distance / 500) * rate;
cout << "totalcharge = $" << totalcharge;
return 0;
}