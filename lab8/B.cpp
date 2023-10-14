#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    int x;
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    reverse(vec.begin(), vec.end());
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }
}