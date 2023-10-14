#include <iostream>
#include <string>
using namespace std;
string STRbool(string s){
    if(s == "1"){
        return "true";
    }else if(s == "0"){
        return "false";
    }
    else{
        return s;
    }
}
int main(){
    string s;
    cin>>s;
    cout<< STRbool(s);
}