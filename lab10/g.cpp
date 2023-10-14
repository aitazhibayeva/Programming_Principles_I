#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<pair<pair<string, int> , pair<string, int>>, int> m;
    for(int i=0; i<n; i++){
        string s1, s2;
        int a,b;
        cin>>s1>>a>>s2>>b;
        m[make_pair(make_pair(s1,a),make_pair(s2,b))] = a+b;
    }
    map<pair<pair<string, int>,pair<string, int>>,int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<((*it).first.first.first)<<" and "<<((*it).first.second.first)<<" "<<((*it).second)<<endl;
    }
}