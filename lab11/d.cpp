#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>y>>x;
    int aa[x][y];
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cin>>aa[i][j];
        }
    }
    for(int i=0; i<y-1; i++){
        for(int j=0; j<x-1; j++){
            int a=aa[i][j]+aa[i+1][j]+aa[i][j+1]+aa[i+1][j+1];
            if(a==0||a==4){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES"; 
}