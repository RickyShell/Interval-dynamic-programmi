#include<cstdio>
#include<iostream>
using namespace std;
#define N 1001
#include<cstring>
int f[N][N],n;
int num[N];
void input()
{
    cin>>n;
    for(int i=1;i<=n;++i)
    cin>>num[i];
    
    memset(f,127,sizeof(f));
    
    for(int i=1;i<=n;++i)
    f[i][i+1]=0;
}
void dp()
{
    for(int i=n-2;i>=1;--i)
      for(int j=i+1;j<=n;++j)
        for(int k=i+1;k<j;++k)
        f[i][j]=min(f[i][j],f[i][k]+f[k][j]+num[i]*num[j]*num[k]);
}
int main()
{
    input();
    dp();
    cout<<f[1][n];
    return 0;
}
