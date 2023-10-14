#include <bits/stdc++.h>
using namespace std;
void func(string s){
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]%2==0){
            k++;
        }
    }
    if(k==s.size()){
        cout<<"Valid";
    }else{
        cout<<"Not valid";
    }
}
int main(){
    string s;
    cin>>s;
    func(s);
}