#include <iostream>
using namespace std;
void PrintNtoone(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    PrintNtoone(n-1);
}
void PrintonetoN(int n,int k=1)
{
    if(n==0)
    {
        return;
    }
    cout<<k<<" ";
    PrintonetoN(n-1,k-1);
}
int getsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+getsum(n-1);
}
int getsumdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10+getsumdigits(n/10);
}
int main() {
	int n;
	cin>>n;
	//PrintNtoone(n);
	//PrintonetoN(n);
	//cout<<getsum(n);
	cout<<getsumdigits(n);
	return 0;
}
