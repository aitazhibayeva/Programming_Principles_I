#include <bits/stdc++.h>
using namespace std;
int arr[200][200];
int main()
{
    int q, z;
    int p;
    int x, y, x2, y2;
    cin >> q >> z; // 10 10
    cin >> p;      // 3
    while (p--)
    { // 2
        cin >> x >> y >> x2 >> y2;
        for (int i = x; i < x2; i++)
        {
            for (int j = y; j < y2; j++)
                arr[i][j] = 1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < z; j++)
        {
            if (arr[i][j] == 0)
                cnt++;
        }
    }
    cout << cnt;
}