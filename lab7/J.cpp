#include <iostream>
#include <cmath>
using namespace std;
void sum(string s){
    int sum=0;
    for(int i=0; i<s.length(); i++){
        s[i]=s[i]-48;
        sum+=s[i]/2;
    }
    cout<<sum;
}
int main(){
    string s;
    cin>>s;
    sum(s);
}