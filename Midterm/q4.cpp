#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getrnd(void);
{
return rand() % 100 + 1;
}
int getrnd(int a);
{
return rand() % a + 1;
}
int getrnd(int a, int b);
{
return rand() % 1 + b + a;
}
int main()
{
int a = 1, b = 2, c = 3;
int result1, result2, result3;
result1 = getrnd;
result2 getrnd(b);
result3 getrnd(a,b);
}