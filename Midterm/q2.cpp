#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string namestudent;
    int score, numstudents, numcourses, numscores;
    int i = 0, j = 0, sum = 0;
    float average, aboveeighty;
    do
    {
        cout << "please enter the number of students  ";
        cin >> numstudents;
        cout << "please enter the number of courses  ";
        cin >> numcourses;
    } while ((numstudents < 0) or (numcourses < 0));
    for (i = 0; i < numstudents; i++)
    {
        cout << "\nplease enter the student name ";
        cin >> namestudent;
        for (j = 0; j < numcourses; j++)
        {
            cout << "enter score " << j+1 << " : ";
            cin >> score;
            sum = sum + score;
        }
        average = (sum / numcourses);
        cout << "student name :  " << namestudent;
        cout << "\nscore 1: " << score;
        cout << "\nscore 2: " << score;
        cout << "\n the sum is  " << sum;
        cout << "\n the average is  " << average;
        sum = 0;
    }
    int above;
    if (average > 80)
    cout << "the number of students who average above 80% is ";
}
