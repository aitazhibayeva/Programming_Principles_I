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
    int k;
    cin>>k;
    sort(v.begin(), v.end());
    for(int i=0; i<k; i++){
        cout<<v[i]<<" ";
    }
}
