#include <bits/stdc++.h>
#include <string>
using namespace std;
void Compare(string S1, string S2){
    if(S1==S2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main(){
    string S1,S2;
    cin>>S1>>S2;
    Compare(S1,S2);
}