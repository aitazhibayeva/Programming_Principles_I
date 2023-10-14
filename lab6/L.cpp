#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void sser(string s,int f){
    int l=0;
    for (int i=0;i<s.length();i++){
        if ((s[i]>='a'&& s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            l=0;
            f=f;
        }
        else{
            l++;
            if (l==f){
               cout << "Valid";
               break;
            }
        }
    }
    if (l!=f){
        cout << "Not valid ";
    }
}

int main(){
    string s;
    cin >> s;
    int f;
    cin >>f;
    sser(s,f);
}