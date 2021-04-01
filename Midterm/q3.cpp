#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int getrnd(void);
{
return rand() % 50 + 1;
}
int isgreater(int n);

int main()
{
    ofstream myfile;
    int i, num, score1, score2;
    string name;
    cout << "enter the number of students ";
    cin >> i;
    myfile.open("numbers.txt");
    for (int j = 1; j <= i; j++)
    {
        cout << "enter the student name  ";
        cin >> name;
        cout << "enter the first score ";
        cin >> score1;
        cout << "enter the second score  ";
        cin >> score2;
         myfile << name << " " << score1 << " " << score2 << endl;
        
    }

    myfile.close();
    return 0;
}
