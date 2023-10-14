#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    stack<char> st;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            st.push('(');
        }else if(s[i]==')'){
            if(st.size()==0){
                cout<<"NO";
                return 0;
            }else if(st.top() ==')'){
                cout<<"NO";
                return 0;
            }
            else{
                st.pop();
            }
        }
    }
    if(st.size() == 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}