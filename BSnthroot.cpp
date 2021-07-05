//SEARCHING
#include<iostream>
using namespace std;
double multiply(double mid,int n)
{
	double ans=1.0;
	for(int i=1;i<=n;i++)
	{
		ans=ans*mid;
	}
	//cout<<ans<<endl;
	return ans;
}
double nthroot(int n,int m)
{
	double low=1;
	double high=m;
	double bound=1e-6;
	while((high-low)>bound)
	{
		double mid=(low+high)/2.0;
		if(multiply(mid,n)<m)
		{
			low=mid;
		}
		else{
			high=mid;
		}
	}
	cout<<low<<" "<<high<<endl;
}
int main()
{
	int n,m;
	cin>>n>>m;
	nthroot(n,m);
	return 0;
}
