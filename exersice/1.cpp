#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    cout << "vedite stroku: ";
    string s, w;
    getline(cin, s);
    vector<string> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != ' ' && s.at(i) != '!' && s.at(i) != '.' && s.at(i) != '?' && s.at(i) != ',')
            w += s.at(i);
        else
        {
            v.push_back(w);
            w.clear();
            w += s.at(i);
            v.push_back(w);
            w.clear();
        }
    }
    v.push_back(w);
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v.at(i);
    return 0;
}