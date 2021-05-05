#include <cmath>
#include <iostream>
using namespace std;

int findmax(int numbers[], int start, int end)
{
int max=0;
for (int i=start; i<=end; i++)
  {
  if (numbers[i] > max)
  max = numbers[i];
  }
return(max);
}

int main() 
{
const int N = 10;
int firstmax, secondmax;
int i=0;
int numbers[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
int j = N/2-1;
firstmax=findmax(numbers, 0, j);
secondmax=findmax(numbers, j+1, N-1);
cout << firstmax << " firstmax \n";
cout << secondmax << " secondmax";
}