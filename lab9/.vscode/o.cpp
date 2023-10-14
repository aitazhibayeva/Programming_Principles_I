#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    map<string, string> q;
    for(int i=0; i<n; i++){
        string log, pas;
        cin>>log>>pas;
        q[log] = pas;
    }
    cin>>m;
    while(m--){
        string log, pas;
        cin>>log>>pas;
        if(!q.count(log)){
            cout<<"login error\n";
        }else if(q[log]!=pas){
            cout<<"password error\n";
        }
        else{
            cout<<"correct password\n";
        }
    }
}