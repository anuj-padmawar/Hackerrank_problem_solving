#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {


    int a1[26] = {0}; 
    int a2[26] = {0}; 
    int i , j; 
    char ch; 
    char ch1 = 'a'; 
    int k = (int)ch1, m; 
    int cnt=0;
      
   
    for(i=0;i<s1.length();i++) 
    {  
        a1[(int)s1[i]-k]++; 
    } 
    for(i=0;i<s2.length();i++) 
    { 
        a2[(int)s2[i] - k]++; 
    } 
  
    for(i=0;i<26;i++) 
    { 
        
        if (a1[i]!=0 and a2[i]!=0) 
        { 
            
            for(j=0;j< min(a1[i],a2[i]);j++) 
            { 
                 
                cnt++;
                  
            } 
        } 
    } 

    if(cnt)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

