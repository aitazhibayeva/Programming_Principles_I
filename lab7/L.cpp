#include <bits/stdc++.h>
using namespace std;
void Palindrome(string s){
    string k=s;
    reverse(k.begin(), k.end());
    if(s==k){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    string s;
    cin>>s;
    Palindrome(s);
}