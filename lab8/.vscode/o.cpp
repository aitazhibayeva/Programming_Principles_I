#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<int> st;
    for(int i=0; i<s.size(); i++){
        st.insert(tolower(s[i]));
    }
    cout<<st.size()<<endl;
    for(set<int>::iterator it=st.begin(); it!=st.end(); it++){
        cout<<(char)*it<<" ";
    }
}