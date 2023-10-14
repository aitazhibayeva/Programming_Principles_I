#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        m.emplace(a,b);
    }
    reverse(m.begin(), m.end());
    for(map<int, int>::iterator it=m.begin(); it!=m.end(); it++){
        cout<<(*it).second<<" "<<(*it).first<<endl;
    }
    return 0;
}