#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,x;
    int s=0,d=0;
    cin>>a>>b>>x;
    if(x==1){
        while(a<=b){
            cout<<a<<" ";
            double c=sqrt(a);
            s=s+c;
            d=(s+1)*(s+1);
            a=d;
            s=0;
        }
    }
    else if(x==-1){
        while(a<=b){
            cout<<b<<" ";
            double c=sqrt(b);
            s=s+c;
            d=(s-1)*(s-1);
            b=d;
            s=0;
        }
    }
}