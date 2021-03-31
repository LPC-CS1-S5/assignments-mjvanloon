#include <iostream>
using namespace std;

bool inputvalidate(int a ,int b)
{
if (a < b)
return true;
else
return false;
}

bool overlap(int a, int b, int c, int d)
{
if ((a>d) || (b<c))
return false;

else
    return true;
} 

int main()
{
   int a, b, c, d;
cout << "enter your input\n";
cin >> a >> b >> c >> d;

if (!inputvalidate(a, b) || !inputvalidate(c, d))
exit (0);

if ( overlap(a, b, c, d))
cout << "these lines are overlapped\n";
else
cout << "these lines are not overlapped\n";
}