#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t=s;
    sort(s.begin(), s.end());
    if(t==s){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}