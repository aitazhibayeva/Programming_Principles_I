#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A' || s[i]=='a'||s[i]=='O'||s[i]=='o'||s[i]=='E'||s[i]=='e'||s[i]=='U'||s[i]=='u'||s[i]=='I'||s[i]=='i'){
            k++;
        }
    }
    cout<<k;
}