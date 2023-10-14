#include <bits/stdc++.h>
using namespace std;
void func(string s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        s[i]-=48;
        sum+=s[i];
    }
    cout<<sum;
}
int main(){
    string s;
    cin>>s;
    func(s);
}