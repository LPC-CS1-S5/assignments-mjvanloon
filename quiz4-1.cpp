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
        cout << "what is the radius of the circle? ";
        cin >> radius;
        cout << "the area is " << (3.14159 * (radius * radius));
    }
    else if (selection = 2)
    {
        cout << "enter the length ";
        cin >> length;
        cout << "enter the width";
        cin >> width;
        cout << "the area is " << (length * width);
    }
    else if (selection = 3)
    {
        cout << " enter the base";
        cin >> base;
        cout << "enter the height";
        cin >> height;
        cout << "the area is " << (.5 * base * height);
    }
    else if (selection = 4)
    {
        return 0;
    }
    return 0;
}