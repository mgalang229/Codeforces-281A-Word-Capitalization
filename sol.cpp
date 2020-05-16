#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	char a = toupper(s[0]);
	cout << a;
	for(int i = 1; i < s.size(); i++){
		cout << s[i];
	}
	cout << "\n";
	return 0;
}
