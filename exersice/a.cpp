#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k,l;
    cin>>k>>l;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    reverse(v.begin()+k-1, v.begin()+l);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}