#include <iostream>
using namespace std;

int inputvalidate(int begin, int end) 
{
if ((begin < 0) || (end < 0) )
return 0;
else
    return 1;
}

void getlistprime (int begin, int end)
{
    int i, j;
    
    for (i = begin; i<= end; i++){
        for (j=2; j<=(i/2); j++)
        if ( i % j == 0)
        break;
        if ( j > (i/2) )
        cout  << i << " -prime number \n";
    }
}

void getlistprimea(int a, int b)
{
if (a == b)
  getlistprime (a, 100);
else
    if (a > b)
     getlistprime (0, 100);
else
    if (a < b)
     getlistprime (a, b);
}


int main()
{
    int  begin, end;
    int res;

    cout << "Enter your two inputs\n";
    cin >> begin >> end;

    res = inputvalidate(begin, end);
    if (!res)
    exit (0);

 getlistprimea (begin,end);
}