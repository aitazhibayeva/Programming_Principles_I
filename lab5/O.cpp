#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int max = 0;
    char c;
    for(int i = 0; i < s.size(); i++){
        if(int(s[i] > max)){
            max = int(s[i]);
            c = s[i];
        }    
    } 
    cout << c;
    return 0;
}