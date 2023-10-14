#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        cout << "YES";
    else
        cout << "NO";
        return 0;
}