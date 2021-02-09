#include <iostream>
#include<iomanip>
using namespace std;

int main () 
{
   
//variables to hold the values of each type of ticket
float classa = 15.00 , classb = 12, classc = 9, amta, amtb, amtc, total;
cout << "please enter the amount of tickets for class A ";
cin >> amta;
cout << "please enter the amount of tickets for class B ";
cin >> amtb;
cout << "please enter the amount of tickets for class C ";
cin >> amtc;
total = (classa * amta) + (classb * amtb) + (classc * amtc);
cout << "the total is $ " <<  std::fixed << std::setprecision(2) << total << "\n"; 
return 0;
cout << total;
//displaying the results and rounding them

return 0;
}
