#include <bits/stdc++.h>
using namespace std;
bool polin(string s){
    string rev = s;
    reverse(s.begin(), s.end());
    return rev == s;
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    
    do{
        if(polin(s)){
            
        cout<<"ZA WARUDO TOKI WO TOMARE";
        return 0;
    }
    }while (next_permutation(s.begin(),s.end()));
        cout<<"JOJO";
}