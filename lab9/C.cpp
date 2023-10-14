#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        m[a]++;
    }
    int s=0;

    for(map<int,int>::iterator it=m.begin(); it!=m.end(); it++){
        if(it->second > 1){
            s++;
        }
    }
    cout<<s;

}