#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int x;
    cin>>x;
    int s=0;
    for(int i=0; i<x; i++){
        s+=v[i];
    }
    cout<<s;
}