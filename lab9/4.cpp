// // #include<iostream>
// // #include<algorithm>

// // using namespace std;

// // int n;
// // int a[111];
// // bool cmp(int a, int b){
// // 	if(a % 2 == 0 && b % 2 == 1) return true;
// // 	if(b % 2 == 0 && a % 2 == 1) return false;
// // 	if(a % 2 == 0 && b % 2 == 0) return b < a;
// // 	if(a % 2 == 1 && b % 2 == 1) return a < b;
// // }
// // int main(){
// // 	cin >> n;
// // 	for(int i = 0; i < n; ++i)
// // 		cin >> a[i];
// // 	sort(a, a + n, cmp);
// // 	for(int i = 0; i < n; ++i)
// // 		cout << a[i] << " ";
// // 	return 0;
// // }
// // // #include<iostream>
// // // #include<map>

// // // using namespace std;

// // // int n, k;
// // // map<int, int> q;
// // // int main(){
// // // 	cin >> n >> k;
// // // 	for(int i = 0; i < n; ++i){
// // // 		int x; 
// // // 		cin >> x;
// // // 		q[x]++;
// // // 	}
// // // 	cout << q[k] << "\n";
// // // 	return 0;
// // // }
// // // #include<iostream>
// // // #include<map>

// // // using namespace std;

// // // int n;
// // // map<string, int> q;
// // // int main(){
// // // 	cin >> n;
// // // 	for(int i = 1; i <= n; ++i){
// // // 		string s;
// // // 		cin >> s;
// // // 		if(!q[s])
// // // 			q[s] = i;
// // // 	}
// // // 	for(map<string, int> :: iterator it = q.begin(); it != q.end(); ++it){
// // // 		cout << it->first << " " << it->second << "\n";
// // // 	}
// // // 	return 0;
// // // }
// #include<iostream>
// #include<algorithm>

// using namespace std;

// int n;
// pair<int, int> a[2222];
// int main(){
// 	cin >> n;
// 	for(int i = 0; i < n; ++i)
// 		cin >> a[i].first >> a[i].second;
// 	sort(a, a + n);
// 	for(int i = 0; i < n; ++i)
// 		cout << a[i].first << " " << a[i].second << "\n";
// 	return 0;
// }a