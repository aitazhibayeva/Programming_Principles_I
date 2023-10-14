#include <iostream>
using namespace std;
int main()
{
    int c = 0, max = 0, d;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            c++;
        else
        {
            if (c > max)
            {
                max = c;

                d = i - c;
            }
            c = 0;
        }
        if (c > max)
        {
            max = c;
            d = i - c + 1;
        }
    }
    for (int i = d; i < d + max; i++)
        cout << s[i];
        cout << endl<< max;
    return 0;
}