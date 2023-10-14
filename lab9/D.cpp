#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int k=0;
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        if(*it == m){
            k++;
        }
    }
    cout<<k;

}