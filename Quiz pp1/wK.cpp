#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k=0;
    for(int i=0; i<s.size(); i++){
        k *=2;
        if(s[i] == '1'){
            k++;
        }
    }
    cout<<k;
}