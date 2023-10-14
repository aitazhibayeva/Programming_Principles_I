#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t=s;
    reverse(s.begin(), s.end());
    if(s==t){
        s.pop_back();
        string q=s;
        reverse(s.begin(), s.end());
        if(s==q){
            cout<<"0";
        }
        else{
            cout<<s.size();
        }
    }
    else{
        cout<<s.size();
    }
}