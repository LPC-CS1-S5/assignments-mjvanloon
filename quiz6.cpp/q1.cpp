#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swaptwovalues (int n1, int n2)
{
cout << n2 << " , " << n1;
}
void swaptwovalues (float f1, float f2)
{
cout << f2 << " , " << f1 << endl;
}
int main()
{
    float a = 1.5;
    float b = 2.4;
    int c = 1;
    int d = 2;
swaptwovalues (a, b);
swaptwovalues (c, d);
}