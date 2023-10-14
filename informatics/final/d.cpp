#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

map<string, int> priorioty;

bool cmp(string s1, string s2){
    return priorioty[s1] > priorioty[s2];
}

int main(){
    int k, n;
    cin >> n >> k;

    string numbers[k];
    for(int i = 0; i < k; ++i){
        cin >> numbers[i];
    }

    set<string> temp;

    for(int i = 0; i < k; ++i){

        temp.insert(numbers[i]);

        for(int j = 0; j < numbers[i].size(); ++i ){
            if(numbers[i][j] == '7' or numbers[i][j] == 'J'){
                priorioty[numbers[i]]++;
            }
        }

    }


    vector<string> ans(temp.begin(), temp.end());

    sort(ans.begin(), ans.end(), cmp);

    if(ans.size() < n){
        cout << "Jaqs is mad";
    }else{

        cout << "Jaqs likes it" << endl;
        for(int i = 0; i < n; ++i){
            cout << ans[i] << " ";
        }

    }


}