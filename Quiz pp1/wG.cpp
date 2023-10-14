#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int cnt[1000];
    string s;
    getline(cin, s);
    int n;
    cin>>n;
    char c[n];
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<s.size(); j++){
            if(c[i]==s[j]){
                cnt[c[i]]++;
            }
        }
    }
    sort(c, c+n);
    for(int i=0; i<n; i++){
        cout<<c[i]<<" - "<<cnt[c[i]]<<endl;
    }
}