#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char x;
    int n, a=0;
    cin>>s>>x>>n;
    for(int i=0; i<s.size(); i++){
        if(s[i]==x){
            a++;
        }
    }
    if(a==n)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}