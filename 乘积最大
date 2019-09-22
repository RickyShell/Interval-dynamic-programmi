#include<iostream>
#include<algorithm> 
#include<cmath>
using namespace std;
int dp[10001][10001],num[10001][10001];
int exa[10001];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		char c;
		cin>>c;
		exa[i]=c-'0'; 
		num[i][i]=c-'0';
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			num[i][j]=10*num[i][j-1]+exa[j];
		}
	}
	for(int i=1;i<=n;i++)
	dp[i][0]=num[1][i]; 
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			for(int r=1;r<j;r++){
				dp[j][i]=max(dp[j][i],dp[r][i-1]*num[r+1][j]);
			}
		}
	}
	cout<<dp[n][k];
	return 0;
}
