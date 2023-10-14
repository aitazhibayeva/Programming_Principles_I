#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int q=0,w=0,e=0,r=0,t=0,y=0,u=0,i=0,o=0;
    while(cin>>n && n!=0){
        if(n==1) q++;
        if(n==2) w++;
        if(n==3) e++;
        if(n==4) r++;
        if(n==5) t++;
        if(n==6) y++;
        if(n==7) u++;
        if(n==8) i++;
        if(n==9) o++;
    }
    cout<<q<<" "<<w<<" "<<e<<" "<<r<<" "<<t<<" "<<y<<" "<<u<<" "<<i<<" "<<o;
}