#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int cnt=0;
		for(int i=0; i<n; ++i) {
			int a;
			cin >> a;
			if(a>=x)
				cnt++;
		}
		cout << (cnt>=1?"YES":"NO") << "\n";
	}
}
