// basic file operations
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    ofstream myfile;
    int i, num;
    cout << "enter the number of integers you want to generate ";
    cin >> i;
    myfile.open("rand.txt");
    for ( int j = 1; j <= i; j++ )
    {
        num = rand() % 100 + 1;
        cout << num << endl;
        myfile << num << endl;
    }

    myfile.close();
    return 0;
}