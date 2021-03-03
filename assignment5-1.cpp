#include <iostream>
using namespace std;

int main()
{
    int n, num, i;
    int nthpower = 1;
    float invertnthpower;
    cin >> n;
    if (n > 0)
        num = n;
    else if (n < 0)
        num = (n * -1);
    if (n != 0)
    {
        for (i = 0; i < num; i++)
            (nthpower *= 2);
        if (n < 0)
            invertnthpower = 1.0/nthpower;
    }
    if (n<0)
    cout << invertnthpower;
    else
    cout << nthpower;
}