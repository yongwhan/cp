#include<cstdio>
const int N=1000002;
char s[N],t[N];
int main(){
	int n,top=0; scanf("%d%s",&n,s+1);
	for(int i=1;i<=n;i++){
		while(top%2&&s[i]==t[top])
			t[top--]=0;
		t[++top]=s[i];
	}
	if(top%2)
		t[top--]=0;
	printf("%d\n%s\n",n-top,t+1);
}
