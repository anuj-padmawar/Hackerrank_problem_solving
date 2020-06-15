#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {

    int ans = 0;
    for(char ch = 'a' ; ch <= 'z' ; ++ch)
    {
        bool fl = 1;
        for(int i = 0 ; fl && i < arr.size() ; ++i)
        {
            fl = 0;
            for(int j = 0 ; j < arr[i].size() ; ++j)
            if(arr[i][j] == ch)
                fl = 1;
        }
        if(fl)
            ++ans;
    }
    return ans;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

