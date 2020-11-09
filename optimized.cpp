#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int w[3], s;
		cin >> s >> w[0] >> w[1] >> w[2];
		if(s>=w[0]+w[1]+w[2])
			cout << 1;
		else if(s>=w[0]+w[1]||s>=w[1]+w[2])
			cout << 2;
		else
			cout << 3;
		cout << "\n";
	}
}
