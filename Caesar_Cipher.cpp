#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
     int n= s.length();
    for (int i=0;i<=n;i++) 
    {
        if (s[i]>='a' && s[i]<='z') 
        { 
            s[i]=((s[i]-'a' +k)%26)+'a'; 
        } 
        else if(s[i] >= 'A' && s[i] <= 'Z') 
        { 
            s[i]=((s[i]-'A'+k)%26)+'A';
        }
    }
    
return s; 

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

