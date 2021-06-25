#include<iostream>
using namespace std;
int RotatedBS(int low,int high,int a[],int T)
{
    while(low<=high){
    int mid=(low+high)>>1;
        if(T==a[mid])
        {
            return mid;
        }
        if(a[mid]<a[0])//part2
        {
            if(T>=a[0] || T<a[mid])//T-->part 1
            {
                high=mid-1;
            }
            else//T-->part 2
            {
                low=mid+1;
            }
        }
        else//part 1
        {
            if(T>a[mid] || T<a[0])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int n,T;
    cin>>n>>T;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<RotatedBS(0,n-1,a,T);
    return 0;
}
