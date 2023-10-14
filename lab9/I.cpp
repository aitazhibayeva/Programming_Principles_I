#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    map<string,int> m;
    for(int i=0; i<n; i++){
        cin>>s;
        if(m[s]==1)
            cout << "user already exists\n";
		else
			cout << "new user added\n";
		m[s] = 1;
    }
}
