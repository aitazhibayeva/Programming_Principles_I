#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0, k;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                cnt++;
            }
        }
        if (cnt != k && i != 0)
            {
                cout << "NO";
                return 0;
            }
            k = cnt;
            cnt = 0;
        }
    cout<<"yes";
}
