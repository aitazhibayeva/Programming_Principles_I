#include <bits/stdc++.h>
using namespace std;
bool polin(vector<int> v){
    for(int i=0; i<v.size()/2; i++){
        if(v[i]!=v[v.size()-1-i]){
            return false;
        }
    }
    return true;
}
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

    do{
        if(polin(v)){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        return 0;
    }
    }while (next_permutation(v.begin(),v.end()));
        cout<<"Impossible";
}