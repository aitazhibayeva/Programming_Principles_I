#include <iostream>
#include <algorithm>

using namespace std;
void aas(string s){
    int f=0;

    for (int i=0;i<s.length();i++){
        if (s[i]%2==0){
               f++;
        }
        
    }
if (f==s.length()){
            cout << "Valid";
        }
        else {
            cout <<"Not valid";
        }
}
int main() {

    string s;
    cin >>s;
   
    aas(s);
}