#include <iostream>
#include <algorithm>
using namespace std;
void num(string s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        s[i]=s[i]-48;
        sum+=s[i];
    }
    int k=s[s.size()-1];
    if(sum%k==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    string s;
    cin>>s;
    num(s);
}