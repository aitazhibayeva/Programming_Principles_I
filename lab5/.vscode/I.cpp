#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    reverse(s1.begin(), s1.end());
    if(s1==s2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}