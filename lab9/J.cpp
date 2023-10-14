#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string x;
        int y;
        cin>>x>>y;
        m[x]+=y;
    }
    for(map<string,int>::iterator it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}