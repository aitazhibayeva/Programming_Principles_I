#include <bits/stdc++.h>
using namespace std;
void func(string s){
    int k=0;
    for(int i=0; i<s.size(); i++){
        s[i]-=48;
        if(s[i]%2==0){
            k++;
        }
    }
    cout<<k;
}
int main(){
    string s;
    cin>>s;
    func(s);
}