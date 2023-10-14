#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.insert(a);
    }
    int s=0;
    for(set<int>::iterator it=v.begin(); it!=v.end(); it++){
        s+=*it;
    }
    cout<<s;
}