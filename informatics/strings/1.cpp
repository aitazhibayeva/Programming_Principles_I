#include <bits/stdc++.h>
using namespace std;
void IsDigit(char c){
    if(isdigit(c)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main(){
    char c;
    cin>>c;
    IsDigit(c);
}