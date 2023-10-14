#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t, x = "";
    cin >> s >> t;
    for(int i = 0; i < ceil(t.size()/s.size()); i++){
        x += s;
    } 
    if(x == t)cout << "YES";
    else cout << "NO";
    return 0;
}