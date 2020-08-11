#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfStones function below.
string gameOfStones(int n) {
    if(n==1)
    {
        return "Second";
    }
    for(int i=0;i<n;i++)
    {
        if(n%7>1)
        {
            return "First";
        }
    }
    return "Second";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = gameOfStones(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

