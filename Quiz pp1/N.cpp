#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){ 
    int n;
    cin >> n; 
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i]; 
    }
    vector<int> s;
    for (int i = n - 1; i >= n / 2; i--){
        int z = array[i];
        int remainder;
        int rn = 0;
        while (z != 0){
            remainder = z % 10;
            rn = rn * 10 + remainder;
            z /= 10;
        }
        s.push_back(rn);
    }

    string a;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == array[i]){
            a = "YES";
        }
        else{
            a = "NO";
            break;
        }
    }
    cout << a;
    return 0;
}