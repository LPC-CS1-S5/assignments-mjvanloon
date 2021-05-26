#include<bits/stdc++.h>
using namespace std;
  
int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
 
    for (int i = 0; i <= N - M; i++)
    {
      
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
  
        if (j == M) 
        {
           res++;
           j = 0;
        }
    }
    return res;
}
   
int main()
{
   string words = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";
   string pat;
   cout << "enter user string ";
   cin >> pat;
   cout << "the substring occurs " << countFreq(pat, words) << " times in the main string";
   return 0;
}