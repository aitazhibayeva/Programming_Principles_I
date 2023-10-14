#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k,s=0;
    cin>>n>>k;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        if(*it == k){
            s++;
        }
    }
    cout<<s;
}