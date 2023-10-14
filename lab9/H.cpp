#include <iostream>
#include <set>
#include <string>

using namespace std;
int main()
{

    set<string> s;
    int n;
    cin >> n;
    string a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    for (set<string>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
        for (int i = 0; i < n; i++)
        {
            if (a[i] == *it)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}