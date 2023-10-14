#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s;
    getline(cin, s); 
    cout<< "Welcome " + s;
    return 0;
}