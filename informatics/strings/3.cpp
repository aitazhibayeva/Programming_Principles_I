#include <bits/stdc++.h>
using namespace std;
void let(char c){
    if(isupper(c)){
        putchar(tolower(c));
    }
    else{
        putchar(toupper(c));
    }
}
int main(){
    char c;
    cin>>c;
    let(c);
}