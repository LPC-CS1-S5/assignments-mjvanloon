#include <iostream>
using namespace std;

int main ()
{
    double regularwages, 
    basepayrate = 18.25,
    regularhours = 40.0,
    overtimewages,
    overtimepayrate = 27.78,
    overtimehours = 10,
    totalwages;
    regularwages = basepayrate * regularhours;
    overtimewages = overtimepayrate * overtimehours;
    totalwages = regularwages + overtimewages;
    cout << "Wages for this week are $" << totalwages << endl;
    return 0;
}
