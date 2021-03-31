#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string namestudent;
    int score, numstudents, numcourses, numscores;
    int i = 0, j = 0, sum = 0;
    float average;
    do
    {
        cout << "please enter the number of students  ";
        cin >> numstudents;
        cout << "please enter the number of courses  ";
        cin >> numcourses;
    } while ((numstudents < 0) or (numcourses < 0));
    for (i = 0; i < numstudents; i++)