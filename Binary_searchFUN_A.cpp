#include<iostream>
using namespace std;
int BS(int low,int high,int a[],int Target)
{
	while(low<high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==Target)
		{
			return mid;
		}
		else if(a[mid]>Target)
		{
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return -1;

}
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<BS(0,n-1,a,t);
	return 0;
}

