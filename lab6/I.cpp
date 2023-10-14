#include <iostream>
#include <algorithm>

using namespace std;
void str(string s){
    int f=0;

    for (int i=0;i<s.length();i++){
        if (i%2==0 && s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }cout << s[i]; 
    }
}
int main() {
    string s;
    cin >>s;
    str(s);
}