#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int begin, end, i;
    do
    {
        cin >> begin;
        cin >> end;
    } 
    while ((begin < 0) or (end > 1300));
    i = 0;
    while ((pow(2, i) < end) and (pow(2, i) > begin))
    {
        cout << pow(2,i);
        i++;
    }
}