#include <iostream>
using namespace std;

int getsum(int n, int i)
{
for (i=0; i<n; i++)
return n;
}
int main()
{
    int n, res;
    cout << "enter your input\n";
    cin >> n;

    res = getsum(n);
    cout << "the summation result is " << res;
    return 0;
}