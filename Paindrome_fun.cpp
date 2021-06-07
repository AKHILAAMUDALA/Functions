#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str,int l,int r)
{
	if(l>=r)
	{
		return true;
	}
	if(str[l]!=str[r])
	{
		return false;
	}
	return isPalindrome(str,l+1,r-1);
}
int main()
{
	string str;
	cout<<"enter a string";
	cin>>str;
	int len=str.length();
	if(isPalindrome(str,0,len-1))
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not a Palindrome";
	}
	return 0;
}
