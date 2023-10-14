#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    set<string> v;
    for(int i=0; i<n; i++){
        cin>>s[i];
        v.insert(s[i]);
    }
    for(set<string>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
        for(int i=0; i<n; i++){
            if(s[i]==*it){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}