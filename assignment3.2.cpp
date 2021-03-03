#include <iostream>
#include<iomanip>
using namespace std;

int main () 
{
   
//variables to hold the values of each type of student
double percentmale, percentfemale, numbfemale , numbmale, totalstudents;
cout << "please enter the number of male students ";
cin >> numbmale;
cout << "please enter the number of female students ";
cin >> numbfemale;
totalstudents = numbmale + numbfemale;
percentmale = ((numbmale / totalstudents) * 100);
percentfemale = ((numbfemale / totalstudents) * 100);
cout << "the percentage of males in the class is ";
cout << percentmale << "%";
cout << "\n";
cout << "the percentage of female students in the class is ";
cout << percentfemale << "%";
//displaying the results and rounding them

return 0;
}
