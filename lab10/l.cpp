#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int s= (1+n)*n/2;
    vector<int> v(s);
    for(int i=1; i<=n; i++){
        fill(v.begin()+sum, v.begin()+sum+i, i);
        sum+=i;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}