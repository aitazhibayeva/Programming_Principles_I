#include <bits/stdc++.h>
#include <map>

using namespace std;
int main()
{

    map<string, string> book = {{"Hi", "Привет"},
                                {"Student", "Студент"},
                                {"?", "!"}};

    cout << book["!"];
}