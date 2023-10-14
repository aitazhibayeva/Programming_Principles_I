#include <iostream>
#include <utility>
#include <string>
using namespace std;
double GetPriceQualityRatio(double price, double quality)
{
    return quality / price;
}
int main()
{
    int n;
    cin >> n;
    string s;
    int a, b;
    pair<string, double> p[n];
    double mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> a >> b;
        double k = GetPriceQualityRatio(a, b);
        mx = max(mx, k);
        p[i] = make_pair(s, k);
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i].second == mx)
        {
            cout << p[i].first << endl;
            break;
        }
    }
    return 0;
}