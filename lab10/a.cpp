#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    int m[n];
    vector <string> v;
    for(int i=0; i<n; i++){
        cin>>s[i];
        cin>>m[i];
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    sort(m, m+n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" "<<m[i]<<endl;
    }
    
}