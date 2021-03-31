#include <iostream>
using namespace std;

int evensumget(int a, int b)
{
return a +b;
}
int oddsumget(int a, int b)
{
return a + b;
}

int main()
{
    int evensum = 0, oddsum = 0, input;
    
    do 
    {
        cout << "enter your input\n";
        cin >> input;
        if (input == -1)
        break;
        else if (input % 2)
        oddsum = oddsumget(input, oddsum);
        else
        evensum = evensumget(input, evensum);
    } while (1);
    cout << oddsum << " is the summation of all odd inputs \n";
    cout << evensum << " is the summation of all the even inputs \n";

}