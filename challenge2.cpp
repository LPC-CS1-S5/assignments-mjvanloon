#include <iostream>
#include<iomanip>
using namespace std;

int main () 
{
   
//variables to hold the meal price, the var3 amount and the var2 amount
double var1 = 28, var2 = 32, var3 = 37, var4 = 24, var5 = 33, sum, avg;


// calculating the variables

sum = var1 + var2 + var3 + var4 + var5;
avg = sum / 5;

//displaying the results and rounding them
std::cout << "sum = " << std::fixed << std::setprecision(3) << sum << endl;
std::cout << "avg = " << std::fixed << std::setprecision(3) << avg << endl;
return 0;
}
