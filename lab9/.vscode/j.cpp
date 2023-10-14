#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> m;
    for(int i=0; i<n; i++){
        string x;
        int y;
        cin>>x>>y;
        m[x] += y;
    }
    for(map<string, int>::iterator it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}