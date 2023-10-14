#include <bits/stdc++.h>
using namespace std;
void func(string s){
    string t=s;
    reverse(s.begin(), s.end());
    if(t==s){
        cout<<"Yes";
    }    
    else{
        cout<<"No";
    }
}
int main(){
    string s;
    cin>>s;
    func(s);
}