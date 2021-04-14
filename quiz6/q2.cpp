#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void getrnd (int &a, int &b, int &c)
{
    &a = rand() % 100 + 1;
    &b = rand() % 100 + 1;
    &c = rand() % 100 + 1;
    
}

int findmin(int n1, int n2, int n3)
{
    int a;
a = std::min(n1,n2,n3);
return a;
}
void printresult(int n1, int n2, int n3, int min)
{
cout << n1 << " , " << n2 << " , " << n3 << " , " << "the minimum is " << min;
}

int main()
{
int min;
int a, b, c;
getrnd (a, b,c);
min = findmin (a,b,c);
printresult ( a, b, c, min);
}
