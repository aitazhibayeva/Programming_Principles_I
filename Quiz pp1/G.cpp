#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{ 
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> s;

    for (int i = n; i <= m; i++)
    {
        float a;
        a = sqrt(i);
        if (a == sqrt(i))
        {
            s.push_back(i);
        }
    }
    if (d == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
    }
    else
    {
        sort(s.begin(), s.end(), greater<int>());
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
    }
}