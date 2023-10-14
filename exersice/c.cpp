#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 100; i <= 999; i++)
    {
        int sum = 0;
        int y = i;
        while (y > 0)
        {
            sum += y % 10;
            y /= 10;
        }
        if (sum == x)
        {
            cout << i << endl;
        }
    }

    return 0;
}
