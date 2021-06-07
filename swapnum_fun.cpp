#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int l,int h)
{
	if(l>=h)
		return;
	swap(a[l],a[h]);
	l++;
	h--;
	rev(a,l,h);	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rev(arr,0,n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
