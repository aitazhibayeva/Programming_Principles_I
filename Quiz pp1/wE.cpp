#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            s[i]-=48;
            sum+=s[i];
        }

    }
    cout<<sum;
}