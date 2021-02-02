#include <iostream>
using namespace std;

int main () 
{
// variables to hold the regular price, the
// amount of discount. and the sale price
double regularprice = 59.95, discount, saleprice;

discount = regularprice * 0.2;
saleprice = regularprice - discount;

cout << "regular price: $" << regularprice << endl;
cout << "discount amount: $" << discount << endl;
cout << "sale price: $" << saleprice << endl;
return 0;
}
