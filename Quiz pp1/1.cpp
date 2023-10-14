#include <iostream>
#include <set>
using namespace std;
int main()
{
    int a;
    set<int> s;
    while (cin >> a && a != 0)
    {
        s.insert(a);
    }
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
}