#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t-->0) {
		int x,y; cin>>x>>y;
		bool ok=true;
		if(x==1) {
			if(y!=1) ok=false;
		} else if(x<=3) {
			if(y>3) ok=false;
		}
		cout<<(ok?"YES":"NO")<<"\n";
	}
	return 0;
}
