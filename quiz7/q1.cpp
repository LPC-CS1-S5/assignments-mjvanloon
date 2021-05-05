
#include <cmath>
#include <iostream>
using namespace std;

const int N = 10;
int i=0;
int main() {
    int numbers[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

if (abs(numbers[i] - numbers[i + 1]) < 10)
{
cout << numbers[i];
cout << " -the difference between adjacent elements is less than 10\n";
}

for (i=1; i < 9; i++)
{
if ((abs(numbers[i-1] - numbers[i]) < 10) && (abs(numbers[i+1] - numbers[i]) < 10))
	cout << numbers[i] <<  " -the difference between adjacent elements is less than 10\n";

}

if (abs(numbers[i-1] - numbers[i]) < 10)
{
cout << numbers[i];
cout << " -the difference between adjacent elements is less than 10\n";
}
}

