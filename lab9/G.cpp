// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string n;
//     cin>>n;
//     vector<string> v;
//     v.push_back(n);
//     for(vector<string>::iterator it=v.begin(); it!=v.end(); it++){
//         if(*it==*(it+1)){
//             v.erase(it);
//         }
//     }for(int i=0; i<v.size(); i++){
//         cout<<v[i];
//     }
// }
#include<iostream>
#include<stack>

using namespace std;

string s;
stack<char> st;
int main(){	
	cin >> s; //0111
	for(int i = 0; i < s.size(); ++i){
		if(!st.size())
			st.push(s[i]);
		else if(st.top() == '1' && s[i] == '1'){
			st.pop();     //1)0111 //2)011 //3)01
		}
		else st.push(s[i]); //01110
	}
	string ans = "";
	while(st.size()){
		ans += st.top();
		st.pop(); 
	}
	for(int i = (int)ans.size() - 1; i >= 0; --i)
		cout << ans[i];
	return 0;
}