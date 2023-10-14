#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int k,t=0;
    cin>>k;
    for(int i=0; i<s.size(); i++){
        if(s[i]==c){
            t++;
        }
    }    
    if(t==k){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}