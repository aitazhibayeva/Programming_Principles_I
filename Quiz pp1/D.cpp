#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    { 
        cin >> array[i];
    }

    vector<int> counts;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                cnt++;
            }
        }
        int s = cnt + 1;
        counts.push_back(s);
    }
    int max = 0;
    for (int i = 0; i < counts.size(); i++)
    {
        if (max < counts[i])
        {
            max = counts[i];
        }
    }
    vector<int> e;
    for (int i = 0; i < counts.size(); i++)
    {
        if (max == counts[i])
        {
            e.push_back(array[i]);
        }
    }
    sort(e.begin(), e.end(), greater<int>());
    for (int i = 0; i < e.size(); i++)
    {
        cout << e[i] << " ";
    }
}