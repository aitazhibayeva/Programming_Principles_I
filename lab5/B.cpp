#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){

    string someString;
    getline(cin, someString); 
    char s=someString[0];
    for (int i=0; s!='\0'; s=someString[++i]){
        putchar(toupper(s));
    } 
    
    return 0;
}