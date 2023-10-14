#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        bool contain = true;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='0' && s[i]<= '9' ){
                contain = false;
                break;
            }
        }
        if(contain){
            cout<<s<<endl;
        }
    }
}