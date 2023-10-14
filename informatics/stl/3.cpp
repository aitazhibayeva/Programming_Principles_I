#include <bits/stdc++.h>
using namespace std;
// сорт в помощь
int main()
{
    int n,l,m;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n - 1);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            l=a[i];
            break;
        }
    }
    vector<int> c(n - 2);
    for (int i = 0; i < n - 2; ++i)
    {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < b.size(); ++i)
    {
        if (b[i] != c[i])
        {
            m=b[i];
            break;
        }
    }
    cout<<l<<"\n"<<m;
    return 0;
}