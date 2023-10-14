#include <bits/stdc++.h> 
 
using namespace std; 
 
char w[1000][1000]; 
int q; 
void print(int x, int y) 
{ 
    for(int i=0;i<q;i++) 
    { 
        for(int s=0;s<q;s++) 
        { 
            if(i+s == q) w[x+i][y+s] = '*'; 
            if(i == s) w[x+i][y+s+q] = '*'; 
             
        } 
         
    } 
    for(int i=0;i<q*2-1;i++) 
    { 
        w[x+q-1][y+i+1] = '*'; 
    } 
 
} 
 
 
int main() 
{ 
     
    cin >> q; 
 
    for(int i=0;i<2*q;i++) 
    { 
        for(int s=0;s<4*q-1;s++) 
        { 
            w[i][s] = ' '; 
        } 
    } 
    for(int i=0;i<2*q;i++) 
    { 
        for(int s=0;s<4*q-1;s++) 
        { 
            if(i == 0 && s == q) print(i, s); 
            if(i == q && s == 0) print(i, s); 
            if(s == 2*q && i == q) print(i, s); 
        } 
    } 
 
    for(int i=0;i<2*q;i++) 
    { 
        for(int s=0;s<4*q;s++) 
        { 
            cout << w[i][s]; 
        } 
        cout << endl; 
    } 
 
 
 
}