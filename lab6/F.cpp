#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void digit(string s, int n){
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
            k++;
        }
    }
    if(k==n || k>n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
int main(){
    string s;
    int n;
    cin>>s>>n;
    digit(s,n);
}