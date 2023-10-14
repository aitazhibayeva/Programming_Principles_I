#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, set<int>> m;
    for(int i=0; i<n; i++){
        string s;
        int a;
        cin>>s>>a;
        m[s].insert(a);
    }
for(auto s: m){
    cout<<s.first<<" ";
    if(s.second.size()<3){
        cout<<"NO BONUS"<<endl;
    }else{
        cout<<"+1"<<endl;
    }
}
}