/*#include <bits/stdc++.h>
using namespace std;
    int main(){
    string s;
    cin >> s; 
    int n = (int)s.size();  
    for(int i = 0; i <= n; i++){
        string t;
        for(int j = 0; j < i; j++){
            t += s[j]; //i=0=0;
        }

        t += s[max(n-1-i , 0)]; //b
        for(int j = i; j < n; j++)
        t += s[j]; 
        string tt = t;
        reverse(tt.begin(), tt.end()); 
        if(t == tt){
            cout << "YES";
            return 0;
        }    
    }
    cout << "NO";
}*/
#include <bits/stdc++.h>
using namespace std;

void reverseStr(string& s){
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
        swap(s[i], s[n - i - 1]);
}

bool isPalin(string s, char beg, char end){
    string s1 = end + s, s2 = s + beg;
    string copy1 = s1, copy2 = s2;
    reverseStr(copy1);
    reverseStr(copy2);
    if(s1 == copy1 || s2 == copy2){
        return true;
    }
    return false;
}

int main(){
    string s;
    getline(cin, s);
    int n = s.size();
    char beg = s[0], end = s[n - 1];
    cout << (isPalin(s, beg, end)? "YES" : "NO");
    return 0;
}