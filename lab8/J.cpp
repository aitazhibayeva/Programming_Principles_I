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
    int o=v[0];
    int max=0;
    int p;
    for(int i=0; i<v.size(); i++){
        if(max<v[i]){
            p=v[i];
        }
    }
    cout<<p-o;
}
