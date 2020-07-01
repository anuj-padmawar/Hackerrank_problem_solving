#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {

    long int left[n],right[n];
    left[0]=1;
    for(long int i=0;i<n;i++)
    {
     if(arr[i]<=arr[i-1])
     {
         left[i]=1;
     }
     else
     {
         left[i]=left[i-1]+1;
     }
    }

    right[n-1]=1;
    for(long int i=n-2;i>=0;i--)
    {
     if(arr[i] <= arr[i+1])
     {
        right[i]=1;
     }
     else
     {
         right[i]=right[i+1]+1;
     }
    }
  long int x=0;
    for(long int i=0;i<n;i++)
    {
        x+=max(right[i],left[i]);
    }
    return x;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

