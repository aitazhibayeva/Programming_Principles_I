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
    for(set<int>::iterator it=v.begin(); it!=v.end(); it++){
        if(*it%2==1){
           cout<<*it<<" "; 
        }
    }
}