#include <iostream>
#include <algorithm>

using namespace std;
void aas(string s){
    int f=0;
    for (int i=0;i<s.length();i++){
        if (s[i]>='a' && s[i]<='z'){
          s[i]=s[i]-32;
        }
    cout<<s[i];
}
}
int main() {

    string s;
    cin >>s;
    aas(s);
}