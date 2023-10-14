#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<int> s;
    for (int i = 0; i < n; i++)
    {
        int max = 0;
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
        s.push_back(max);
    }
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}