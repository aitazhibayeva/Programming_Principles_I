#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,l=0;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        if(*it==v.back()){
            l++;
        }
    }
    cout<<l;
}