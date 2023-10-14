#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<int> d;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        d.push_back(a);
    }
    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
}