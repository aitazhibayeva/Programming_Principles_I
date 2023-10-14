#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i.first << " " << i.second << "\n";
    }
}