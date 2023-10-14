#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int , int> p[501];
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        p[i].first = x+y;
        p[i].second = i+1;
    }
    sort(p, p+n);
    for(int i=0; i<n; i++){
        cout<<p[i].second<<" ";
    }
}