#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int getrnd(void);
{
return rand() % 50 + 1;
}
int isgreater(int a, int b);
{
if (a > b)
return 1
else
    return 0
}

int main()
{
    ofstream myfile;
    int i, num, rand1, randn; 
    rand1 = getrnd;
    randn= getrnd;
    myfile.open("numbers.txt");
    for (i = 1; i == 5, i++)
    {
    if (rand1 < randn)
    cout << randn;
    rand1 = getrnd;
randn = getrnd;
    }

    myfile.close();
    return 0;
}
