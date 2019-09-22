//最大值
#include<iostream>
#include<cmath>
using namespace std;
int dp[1001][1001],stone[1001];
int sum[1001];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>stone[i];
		sum[i]=sum[i-1]+stone[i];
	}
	for(int len=2;len<=n;len++){ //枚举长度 
		for(int i=1;i<=n;i++){ //枚举起点 
			int j=i+len-1;
			if(j>n) continue;
			for(int k=i;k<j;k++){ //枚举断点 
				dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]+sum[j]-sum[i-1]);
				
			}
		}
	}
	cout<<dp[1][n];
	return 0;
}
/* 6
5
8
6
9
2
3

ans:129 */
//最小值
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sand[1001],sum[1001],dp[1001][1001];
int main(){
	int n;
	cin>>n;
	memset(dp,127,sizeof(dp));
	for(int i=1;i<=n;i++){
		cin>>sand[i];
		sum[i]=sum[i-1]+sand[i];
		dp[i][i]=0;
		
	}
	for(int len=2;len<=n;len++){
		for(int i=1;i<=n;i++){
			int j=i+len-1;
			if(j>n) break;
			for(int k=i;k<j;k++){
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+sum[j]-sum[i-1]);
			}
		}
	}
	cout<<dp[1][n];
	return 0;
}
/* 4 1 3 5 2  ans:22 */
