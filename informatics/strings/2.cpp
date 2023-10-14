#include <bits/stdc++.h>
using namespace std;
void letter(char c){
    if(tolower(c)){
        putchar(toupper(c));
    }
}
int main(){
    char c;
    cin>>c;
    letter(c);
}