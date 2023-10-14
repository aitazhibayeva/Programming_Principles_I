#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a,b;
    cin>>a>>b;
    string sub = s.substr(a, b-a+1);
    cout<<sub;
    return 0;
}