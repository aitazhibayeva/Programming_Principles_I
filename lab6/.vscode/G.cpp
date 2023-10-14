#include <bits/stdc++.h>
using namespace std;
void glasnye(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='U'||s[i]=='u'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'){
            s[i]=0;
        }
    }
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
}
int main(){
    string s;
    getline(cin, s);
    glasnye(s);
}