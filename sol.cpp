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
		int cnt=0;
		if(s>=w[0]+w[1]+w[2])
			cnt++;
		else if(s>=w[0]+w[1]) {
			cnt++;
			if(s>=w[2])
				cnt++;
		} else if(s>=w[0]) {
			cnt++;
			if(s>=w[1]+w[2])
				cnt++;
			else {
				if(s>=w[1]) {
					cnt++;
					if(s>=w[2])
						cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}
