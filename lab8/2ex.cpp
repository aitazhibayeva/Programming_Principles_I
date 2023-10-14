#include <bits/stdc++.h>
using namespace std;
bool prime(int c){
	if(c==1){
		return false;
	}
	for(int i=2; i<sqrt(c); i++){
		if(c%i==0){
			return false;
		}
	}
	return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k,l=0;
    cin>>k;
    for(int i=0; i<v.size(); i++){
        if(v[i]>k && prime(v[i])){
        	l++;
		}
    }
    cout<<l;
}