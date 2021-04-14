#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swaptwovalues (int n1, int n2)
{
    int tmp;
tmp = n1;
n1 = n2;
n2 = tmp;
cout << n1 << " , " << n2;
}
void swaptwovalues (float f1, float f2)
{
    float tmp;
tmp = n1;
n1 = n2;
n2 = tmp;
cout << n1 << " , " << n2;
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