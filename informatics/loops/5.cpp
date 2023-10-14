#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1>x2){
        cout<<"No";
        return 0;
    }
    if(x1<=x2){
        if(y1<y2){
            cout<<"Yes";
            return 0;
        }else{
            cout<<"No";
            return 0;
        }
    }
}