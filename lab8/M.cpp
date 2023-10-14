#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    set<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.insert(a);
    }
    int sum = 0;
    for (set<int>::iterator it = v.begin(); it != v.end(); it++)
        sum += *it;

    cout << sum << endl;

    return 0;
}