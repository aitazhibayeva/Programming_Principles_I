#include <bits/stdc++.h>
using namespace std;
void polin(string s){
    string t=s;
    reverse(s.begin(), s.end());
    if(s==t){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main(){
    string s;
    cin>>s;
    polin(s);
}