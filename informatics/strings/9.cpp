#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1>>s2;
    size_t sub=s2.find(s1);
    if(sub!=-1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}