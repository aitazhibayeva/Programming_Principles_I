#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int b=0, l=0;
    for(int i=0; i<s.size(); i++){
        if(iswupper(s[i])){
            b++;
        }
        else{
            l++;
        }
    }
    cout<<l<<" "<<b;
}