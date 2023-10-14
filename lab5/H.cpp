#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; // 1 1 2 2 3      1 1 2 2 3
    int cnt = 0, k;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j]) // 1)2  //2)2 //cnt=1
                cnt++;
        }
        if (cnt != k and i != 0) //1!=2 && i=5
        {
            cout << "NO";
            return 0;
        }

        k = cnt; // 2
        cnt = 0; // 0
    }
    cout << "YES";
}