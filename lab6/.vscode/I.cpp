#include <bits/stdc++.h>
using namespace std;
void func(string s){
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            s[i]=s[i]-32;
        }
    }
    cout<<s;
}
int main(){
    string s;
    cin>>s;
    func(s);
}