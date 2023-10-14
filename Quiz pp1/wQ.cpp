#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    string tt="@gmail.com";
    for(int i=0; i<n; i++){
        if(s[i].find(tt) !=-1){
            s[i].erase(s[i].end()-10, s[i].end());
            cout<<s[i]<<endl;
        }
    }
}
