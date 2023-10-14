#include <bits/stdc++.h>
using namespace std;
void mod(string s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        s[i]-=48;
        sum+=s[i];
    }
    if(sum%s[s.size()-1]==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    string s;
    cin>>s;
    mod(s);
}