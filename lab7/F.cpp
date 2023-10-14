#include <iostream>
using namespace std;
void even(string s){
    int k=0;
    for(int i=0; i<s.length(); i++){
        s[i]=s[i]-48;
        if(s[i]%2==0){
            k++;
        }
    }
    cout<<k;
}
int main(){
    string s;
    cin>>s;
    even(s);
}