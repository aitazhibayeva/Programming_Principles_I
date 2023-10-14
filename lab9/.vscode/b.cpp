#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        if(*it%2==0){
            cout<<*it<<" ";
        }
    }
    reverse(v.begin(), v.end());
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        if(*it%2==1){
            cout<<*it<<" ";
        }
    }
}