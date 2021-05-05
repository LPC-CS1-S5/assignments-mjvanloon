#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
int main()
{
 vector<int> numbers;
 int size = 20;
 srand(time(0));
 makevector(numbers, size);
 printvector(numbers);
 deleteone(numbers);
 printvector(numbers);
 cout << "the number of times the integer you entered was deleted"
}
void makevector(vector<int> &vec, int size)
{
 for(int i=0; i<size; i++)
         vec.push_back(rand() % 10);
}
void printvector(vector<int> vec)
{
 for(int v : vec)
          cout << v << "\t";
 cout << endl;
}
void deleteone(vector<int> &vec)
{
int usernum;
cout << "enter the number you want to delete \n";
cin >> usernum;
int locnum = find(vec.begin(), vec.end(), usernum);
if (locnum != vec.end())
 vec.erase (vec.begin()+locnum);
 int deletecount = vec.end()-vec.begin();
 cout << usernum << "is deleted " << deletecount << "times";
}