#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string str;
    cin>>str;
    string str2;
    cin>>str2;
    size_t substring_length = str.find(str2);
    if (substring_length != -1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}