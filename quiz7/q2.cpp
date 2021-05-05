#include <iostream>
using namespace std;

void printtriangle(int num[][3], int size)
{
for (int i=0; i<3; i++) 
{
    cout << "\n";
for (int j=0; j<3; j++)

if (i>= j)

cout << num[i][j];
}
}



int main()
{
    const int SIZE = 3;
    int numbers[SIZE][SIZE] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
    
    printtriangle(numbers, SIZE);
}


