#include<bits/stdc++.h>
using namespace std;
int n,m,dp[41][41][7];
char str[41];
int main(){
	scanf("%d%d%s",&n,&m,str+1);
	for(int i=1;i<=n;i++){
		dp[i][i][0]=str[i]-'0';
		for(int j=i+1;j<=n;j++)
			dp[i][j][0]=dp[i][j-1][0]*10+(str[j]-'0');
	}
	for(int i=n-1;i>=1;i--)
		for(int j=i+1;j<=n;j++)
			for(int k=1;k<=m && k<=j-i;k++){
				int maxx=0;
				for(int mid=i;mid<j;mid++){
					for(int l=0;l<k && l<=mid-i;l++){
						if(dp[i][mid][l]*dp[mid+1][j][k-l-1]>maxx)
							maxx=dp[i][mid][l]*dp[mid+1][j][k-l-1];
						dp[i][j][k]=maxx;
					}
				}
			}
	printf("%d\n",dp[1][n][m]);
	return 0;
}
