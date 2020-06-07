#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s1) 
{
    int i=0;
     int j=s1.length()-1;
     int ans=0;
     while(i<=j)
      {
          int max1=max((int)s1[i],(int)s1[j]) ;
          int min1=min((int)s1[i],(int)s1[j]) ;
          ans+=(max1-min1) ;
          i++;
          j--;
   
      }
      return ans;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

