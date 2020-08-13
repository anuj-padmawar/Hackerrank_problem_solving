#include <bits/stdc++.h>


using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) 
{
    int NO_OF_CHARS=256;
    int count[NO_OF_CHARS]={0}; 
    for (int i=0;s[i];i++)
    { 
        count[s[i]]++; 
    }
    int odd=0; 
    for (int i=0;i<NO_OF_CHARS;i++) 
    { 
        if (count[i] & 1) 
        {
            odd++; 
        }
  
        if (odd > 1) 
        {
            return "NO"; 
        }
    } 
    return "YES"; 


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

