#include <bits/stdc++.h>
using namespace std;
void space(string s){
    int k=1;
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            k++;
        }
    }
    cout<<k;
}
int main(){
    string s;
    getline(cin,s);
    space(s);
}
