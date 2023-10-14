#include <bits/stdc++.h>
using namespace std;
void find(string s, int n){
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            k++;
        }
    }
    if(k==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    find(s,n);
}