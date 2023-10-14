#include <iostream>
using namespace std;
int max(int a,int b,int c,int d){
    int maximum=a;
    if(b>maximum){
        maximum=b;
    }
    if(c>maximum){
        maximum=c;
    }
    if(d>maximum){
        maximum=d;
    }
    return maximum;
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(a,b,c,d);
}