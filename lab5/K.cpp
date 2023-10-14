#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string s;
    int n=0;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='o'){
            n++;
        }
    }
    cout<<n;
    return 0;
}