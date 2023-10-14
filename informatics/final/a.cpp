#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    queue<pair<string, float>> q;
    while(n--){
        string s;
        float p;
        cin>>s>>p;
        q.push(make_pair(s,p));
    }
    vector<string> v;
    while(v.size()<m){
        pair<string, float> curr=q.front();
        q.pop();
        if(curr.second>q.front().second){
            v.push_back(curr.first);
        }else{
            q.push(curr);
        }
    }
    for(auto i: v){
        cout<<i<<endl;
    }
}