#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
    string num; 
    int sumeven = 0, sumodd = 0;
    cin>>num;
    for(int i=0; i<num.size(); i++){
        if(i%2==0){
            sumeven+=num[i];
        } else {
            sumodd+=num[i];
        }
    }
    if(sumeven == sumodd){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}