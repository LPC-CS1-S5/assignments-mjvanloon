#include <iostream>
#include <cmath>
using namespace std;
double nthpowerp(int num)
{
    int i, nthpower;
    float invertnthpower;
    for (i = 0; i < num; i++)
            (nthpower *= 2);
    return nthpower;
}

double nthpowern(int num)
{
    
    return pow(2, num);
}

void printout(float n)
{
    cout << n;
}

int main()
{
    int n;
    float result;
    cout << "enter the input\n";
    cin >> n;
    if (n > 0)
       result = nthpowerp(n);
    else if (n < 0)
        result = nthpowern(n);
        else
           result = 1;
        printout(result);
}
    