#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==0){
            cout<<v[i]<<" ";
        }
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==1){
            cout<<v[i]<<" ";
        }
    }
}