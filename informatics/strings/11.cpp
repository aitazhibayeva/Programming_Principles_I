#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    s.push_back(c);
    string t=s;
    reverse(s.begin(),s.end());
    if(s==t){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}