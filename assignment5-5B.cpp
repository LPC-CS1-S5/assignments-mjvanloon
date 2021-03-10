#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    ifstream myfile;
    int i, num, score1, score2;
    string name;
    myfile.open("scores.txt");
    myfile >> i;
    for (int j = 1; j <= i; j++)
    {
        myfile >> name;
        myfile >> score1;
        myfile >> score2;
        cout << name << endl;
        cout << " the sum is: " <<  (score1 +score2);
        cout << ".  the average is: " << ((score1+score2)/2) << endl;
        
        
    }

    myfile.close();
    return 0;
}
