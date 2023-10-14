#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[501];
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]=1;
    }
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(m[a[i]^a[j]]){
                k++;
            }
        }
    }
    cout<<k;
}