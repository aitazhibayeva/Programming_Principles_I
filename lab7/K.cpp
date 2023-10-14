#include <iostream>
#include <cmath>
using namespace std;
void max(string s){
    int max=0;
    for(int i=0; i<s.length(); i++){
        s[i]=s[i]-48;
        if(s[i]>max){
            max=s[i];
        }
    }
    cout<<max;
}
int main(){
    string s;
    cin>>s;
    max(s);
}