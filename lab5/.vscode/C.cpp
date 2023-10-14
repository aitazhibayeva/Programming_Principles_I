#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    size_t sub=s.find(t);
    if(sub!=-1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}