#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    // for loop execution
    for (int a = 0; a < 3; a = a + 1)
        for (int b = 0; b < 3; b = b + 1)
        {
               cout << "values : " << a << "," << b << endl;
        }

    return 0;
}