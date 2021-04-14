#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    ifstream myfile;
    int i, num, score1, score2;
    int studentcount = 0;
    string name;
    myfile.open("students.txt");
    myfile >> i;
     cout << i;
    for (int j = 1; j <= i; j++)
    {

        cout << i;
        myfile >> name;
        myfile >> score1;
        myfile >> score2;
        cout << name << endl;
        cout << " the sum is: " <<  (score1 +score2);
        cout << ".  the average is: " << ((score1+score2)/2) << endl;
        if ((score1 + score2 /2) > 80);
        studentcount ++;
        
    }
cout << studentcount;
    myfile.close();
    return 0;
}