#include<bits/stdc++.h>
using namespace std;
int dp[1000005];
int fact(int n)
{
	if(n>1)
	{
		return dp[n]=n*fact(n-1);
	}
	else
	{
		return 1;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
}
int main()
{
	int n,factorial;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		dp[i]=-1;
	}
	factorial=fact(n);
	cout<<factorial<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
