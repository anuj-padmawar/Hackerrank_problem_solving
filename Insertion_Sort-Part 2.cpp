#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the insertionSort2 function below.
void insertionSort2(int ar_size, vector<int> ar) {

    int i,j,k,v; 
    for(i=1;i<=ar_size-1;i++) 
    { 
        v=ar[i];
        j=i;
        while(ar[j-1]>v && j>=1) 
        {
            ar[j]=ar[j-1];
            j--; 
        } 
        ar[j]=v;
        k=0;
        while(k<ar_size)
        {
                cout<<ar[k++]<<" ";
        }
        printf("\n"); 
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    insertionSort2(n, arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

