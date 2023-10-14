#include <iostream>
#include <algorithm>

using namespace std;
void without(string s){

    for (int i=0;i<s.length();i++){
        if (s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='i'||s[i]=='I'){
            s[i]=0; 
    }     
}
for (int i=0;i<s.length();i++){
    if(s[i]!=0)
        cout<<s[i];
}
}

int main() {
    string s;
    getline(cin ,s);
    without(s);
}