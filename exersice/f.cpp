#include <iostream>
using namespace std;
int main(){
    string s;
    string t = "@gmail.com";
    string tt = "@kbtu.kz";
    cin >> s;
    int k = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='@'){
            k++;
        }
    }
    for (int i = 0; i < s.size(); i++){
        if (k==1){
            if (s.find(t) != -1){
                cout << "Yes";
                break;
            }
            else if (s.find(tt) != -1){
                cout << "Yes";
                break;
            }
            else{
                cout << "No";
                break;
            }
        }else
            cout << "No";
            break;
    }
}