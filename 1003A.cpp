#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,ret=0; cin>>n;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		cin>>a;
		ct[a]++;
		ret=max(ret,ct[a]);
	}
	cout << ret << endl;
	return 0;
}
