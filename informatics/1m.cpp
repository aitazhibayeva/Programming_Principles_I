#include <iostream> //1 100 1 (1 4 9 16 25 36 49 64 81 100)
                    //4 9 -1 (9 4)
#include <cmath>
using namespace std;

int main(){
    int a,b,x;
    int s=0,d=0;
    cin>>a>>b>>x;
    if(x==1){
        while(a<=b){
            cout<<a<<endl;
            double c=sqrt(a);
            s=s+c;
            d=(s+1)*(s+1);
            a=d;
            s=0;
        }
    }
    else if(x==-1){
        while(a<=b){
            cout<<b<<endl;
            double c=sqrt(b);
            s=s+c;
            d=(s-1)*(s-1);
            b=d;
            s=0;
        }
    }
}