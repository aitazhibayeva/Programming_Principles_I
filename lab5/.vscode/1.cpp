#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int max=0,min=100000000;
    for(int i=0; i<s.size(); i++){
        s[i]=s[i]-48;
        if(s[i]>max){
            max=s[i];
        }
        if(s[i]<min){
            min=s[i];
        }
    }
    cout<<max<<" "<<min;
}