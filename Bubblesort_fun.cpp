#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int n,int a[])
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		temp=0;
		for(int j=0;j<n-1;j++)
		{
			if(a[j+1]<a[j])
			{
				swap(a[j],a[j+1]);
				temp=1;
			}
		}
		if(temp==0)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	bubble_sort(n,a);
	return 0;
}
