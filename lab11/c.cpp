#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    map<string, int> m;
    for(int i=0; i<n; i++){
        string x;
        int y;
        cin>>x>>y;
        m[x]+=y;
        sum+=y;        
    }
    vector<pair<double, string>> v;
    map<string, int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        v.push_back(make_pair((double)it->second/sum*100, it->first));
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i].second<<" "<<v[i].first<<"%"<<endl;
    }
}
// 3
// arman 4
// dary 3
// arman 1

// ouput:
// arman2.500
// dary 3.000