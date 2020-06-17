#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> c;
    for(int i=0;i<m;i++)
    {
       int a;
       cin>>a;
       c.push_back(a);
    }
    int ans=0;
    if(n==m)
    {
        cout<<ans<<endl;
        return 0;
    }
    sort(c.begin(),c.end());
    for(int i=0;i<m-1;i++)
    {
    ans=max(ans,abs(c[i]-c[i+1])/2);
    }#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {

    int j=s.length()-1;
        bool state=true;
        for(int i=1;i<s.length();i++,j--)
        {

            if(abs(s[i]-s[i-1])!= abs(s[j]-s[j-1]))
            {
                state=false;
                break;
            }
        }
        if(state)
        {
            return "Funny";
        }
        else
        {
            return "Not Funny";
        }


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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

    ans=max(max(ans,c[0]),(n-1)-c[m-1]);
    cout << ans << endl;
    return 0;
}

