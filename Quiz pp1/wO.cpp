#include <iostream>
#include <string>
using namespace std;
int p[1100000];
int main()
{
    string s;
    cin >> s;
    int mx = 0;
    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            p[i] = p[i - 1] + 1;
        }
        mx = max(mx, p[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i] == mx)
        {
            cout << s[i] << ' ' << p[i] + 1;
            break;
        }
    }
    cout << endl;
    return 0;
}