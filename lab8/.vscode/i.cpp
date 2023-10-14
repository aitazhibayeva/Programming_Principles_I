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
    int x;
    cin>>x;
    if(find(v.begin(), v.end(), x)!=v.end()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}