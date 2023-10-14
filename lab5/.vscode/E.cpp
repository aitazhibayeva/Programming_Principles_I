#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int even=0,odd=0;
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            odd+=s[i];
        }
        else{
            even+=s[i];
        }
    }   
    if(odd==even){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}