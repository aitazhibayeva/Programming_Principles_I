#include <iostream> 
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    vector<int> v;
    set<int> s;
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]>0){
                k++;
            }
        }
        v.push_back(k);
        k=0;
    }
    int mx=0,l=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>mx){
            mx=v[i];
            l=i+1;
        }
        s.insert(v[i]);
    }
    if(s.size()==1){
        cout<<"Numbers are equal";
    }
    else{
        cout<<l;
    }
}
// #include <iostream>
// #include <map>

// using namespace std;

// int main(){
//     int n, m, curr, currCount = 0, maxIndex = 0, maxCount = 0;
//     cin >> n >> m;
//     int arr[n][m];
//     map<int, int> mp;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){    
//             cin >> curr;
//             if(curr > 0){
//                 currCount++;
//             }
//         }
//         mp[i] = currCount;
//         currCount = 0;
//     }
//     map<int, int>::iterator it = mp.begin();
//     maxCount = it -> second; //2 //3
//     maxIndex = it -> first;  //0 //1
//     bool isSame = true;
//     for(it; it != mp.end(); it++){
//         currCount = it -> second; //2 //3
//         if(currCount != maxCount){
//             isSame = false; // 2!=3
//         }
//         if(currCount > maxCount){ 
//             maxCount = currCount; //3
//             maxIndex = it -> first; //1
//         }
//     }
//     if(isSame == true){  
//         cout << "Numbers are equal";
//     }else{
//         cout << maxIndex+1; //2
//     }
    
//     return 0;
// }