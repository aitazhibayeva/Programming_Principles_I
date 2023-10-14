#include <bits/stdc++.h>
using namespace std; 
int main(){ 
    long long int n, k=INT_MIN, m=INT_MIN; 
    cin >> n;
    long long int a[n][n]; 
    for (int i=0; i<n; i++)  { 
        for(int j=0; j<n; j++){
            cin >> a[i][j]; 
            if (k < a[i][j]){ 
            k = a[i][j]; 
            } 
        } 
    } 
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n;j++){ 
            if(k==a[i][j]){     
                a[i][j]=INT_MIN; 
            }
        } 
    } 
    for (int i=0; i<n; i++)  { 
        for(int j=0; j<n; j++){ 
            if (m < a[i][j]){ 
            m = a[i][j]; 
            } 
        } 
    } 
    if(m==INT_MIN){ 
        cout <<"0"; 
    } 
    else{
        cout <<m;
        } 
    return 0; 
}

