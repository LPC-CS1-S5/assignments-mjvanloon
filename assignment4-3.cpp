#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int selection, radius, length, width, base, height;
    cout << " which formula do you want to see? n\n";
    cout << "1. area of a circle \n";
    cout << "2. area of a rectangle \n";
    cout << "3. area of a triangle\n";
    cout << "4. none of them\n";
    cin >> selection;
    if (selection = 1)
    {
        
        cout << "the area is pi times radius squared ";
    }
    else if (selection = 2)
    {

        cout << "the area is length times width" ;
    }
    else if (selection = 3)
    {
        
        cout << "the area is .5 times base times height";
    }
    else if (selection = 4)
    cout << "have a good day";
    {
        return 0;
    }
    return 0;
}