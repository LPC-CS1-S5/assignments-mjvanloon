#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

int main  ()
{
const unsigned short N=5;
string input;
struct scores{
  double sc[N];
  string grade;
};
struct Grade{
    string first;
    string last;
    string ssn;
    scores score;
};
Grade g;

ifstream myfile;
myfile.open("finalgrades.txt", ifstream::in);
ofstream wf("student.dat", ios::out | ios::binary);
// read a student record into the struc
while (!myfile.eof())
{
    getline(myfile,g.first,',');
    getline(myfile,g.last,',');
    getline(myfile,g.ssn,',');

    string myscores;
    for (int i=0; i < 5; i++)
    {
      getline(myfile,myscores,',');
      g.score.sc[i] = stod(myscores);
    }

    getline(myfile,g.score.grade);

    // output the student record to the screen
    cout << g.first << "\n";
    cout << g.last << "\n";
    cout << g.ssn << "\n";
    for (int i=0; i<5; i++)
      cout << g.score.sc[i] << "\n";
    cout << g.score.grade << "\n";

    // output the student record to the binary file
    wf.write((char *) &g, sizeof(Grade));
}

myfile.close();
}
