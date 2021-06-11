#include <iostream>
#include<vector>
using namespace std;

void PrintCombinationSum(int ind,int N,int n,vector<int>ds,int a[])
{
    if(ind == n)
    {
        if(N==0)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            cout<<"\n";
        }
        return ;
    }
    //logic to pick
    if(a[ind]<=N)
    {
        ds.push_back(a[ind]);
        PrintCombinationSum(ind,n,N-a[ind],ds,a);
        ds.pop_back();
    }
    //non-pick logic
    PrintCombinationSum(ind+1,n,N,ds,a);
}
int main() {
    int n,N;//3 4
    cin>>n>>N;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];//1 2 4
    }
    vector<int>ans;//to store all the possible PrintCombintions
    PrintCombinationSum(0,n,N,ans,a);
    return 0;
    

}
