#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int sum1=0,sum2=0;
    string someString;
    getline(cin, someString); 
    char s = someString[0];
    for(int i=0; s!='\0'; s = someString[++i]){
        if(isupper(s))
            sum1++;
        else 
            sum2++;
    }
    cout<<sum2<<" "<<sum1;
    return 0;
}