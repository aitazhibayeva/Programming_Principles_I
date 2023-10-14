#include <bits/stdc++.h>
using namespace std;
void func(string s){
    int max=0;
    for(int i=0; i<s.size(); i++){
        s[i]-=48;
        if(s[i]>max){
            max=s[i];
        }
    }
    cout<<max;
}
int main(){
    string s;
    cin>>s;
    func(s);
}