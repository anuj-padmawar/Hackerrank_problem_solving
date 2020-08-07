#include <bits/stdc++.h>

using namespace std;

// Complete the gridChallenge function below.
string gridChallenge(vector<string> grid) 
{
    bool arrangeable=true;
    int N=grid.size();
        for(int i=0;i<N;i++) 
        {
            for(int j=1;j<N;j++) 
            {
                if(grid[j][i] < grid[j-1][i]) 
                {
                    arrangeable = false;
                }
            }   
            if(!arrangeable) 
            {
                break;
            }
        }
        if(arrangeable) 
        {
            return "YES";
        }
           return  "NO";

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

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
            sort(grid[i].begin(),grid[i].end());
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

