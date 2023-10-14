#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n,k=0,sum=0;
    cin>>n;
    vector<pair<string ,int>> v;
    map<string, int> m;
    for(int i=0; i<n; i++){
        string s;
        int a;
        cin>>s>>a;
        v.push_back(make_pair(s,a));
    }
    sort(v.begin(), v.end());
    for(vector<pair<string, int>>::iterator it=v.begin(); it!=v.end(); it++){
        for(vector<pair<string, int>>::iterator i=v.begin(); i!=v.end(); i++){
            if((*it).first==(*i).first){
                k++;
                sum+=(*it).second+(*i).second;
                
            }
            break;
        }
        // cout<<sum<<endl;
        // cout<<k<<endl;
        
    }

    for(vector<pair<string, int>>::iterator it=v.begin(); it!=v.end(); it++){
        m.emplace((*it).first, ((*it).second));
    }
    for(map<string, int>::iterator it=m.begin(); it!=m.end(); it++){
        cout<<((*it).first)<<" ";
        float d = sum/k;
        printf("%.3f", d);
        cout<<endl;
    }
}
/*
3
asd 4
asd 2
zxc 2
output:
asd 3.000
zxc 2.000
*/