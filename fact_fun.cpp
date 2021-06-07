#include<bits/stdc++.h>
using namespace std;
int n;
int fact(int i)
{
	if(i>=n)
	{
		return n;
	}
	return i*fact(i+1);//1*fact(2)...
}
int main()
{
	
	cin>>n;
	cout<<fact(1);
	return 0;
}
