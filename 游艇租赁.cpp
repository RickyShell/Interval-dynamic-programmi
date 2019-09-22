#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001],a[1001][1001];
int way[1001][1001];
void print(int from,int to){
	if(way[from][to]==0) {
		
		cout<<"->"<<to;
		return;
	}
	
		print(from,way[from][to]);
		print(way[from][to],to);
		
	
}
int main(){
	int n;
	cin>>n;
	memset(dp,127,sizeof(dp));
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			cin>>a[i][j];
			 dp[i][j]=a[i][j];
		}
	} 
	for(int len=2;len<=n;len++){
		for(int i=1;i<=n;i++){
			int j=i+len;
			if(j>n) break;
			for(int k=i;k<=j;k++){
				 
				if(dp[i][k]+dp[k][j]<dp[i][j]){
					dp[i][j]=dp[i][k]+dp[k][j];
					way[i][j]=k;
				}
			}
		}
	}
	cout<<dp[1][n];
	cout<<endl;
	cout<<1;
	print(1,n);
	return 0;
}
/*6
2 6 9 15 20 3 5 11 18 3 6 12 5 8 6
ans:15
1->2->4->6 */
