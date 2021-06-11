#include <iostream>
#include<vector>
using namespace std;

void Printarraysumcomb(int ind,int S,int n,int a[],vector<int>&ans)
{
    if(ind == n)
    {
        if(S==0)
        {
            for(auto it:ans)
            {
                cout<<it<<" ";
            }
            cout<<"\n";
        }
        return ;
    }
    //logic to pick
    if(a[ind]<=S)
    {
        ans.push_back(a[ind]);
        Printarraysumcomb(ind,S-a[ind],n,a,ans);
        ans.pop_back();
    }
    //non-pick logic
    Printarraysumcomb(ind+1,S,n,a,ans);
}
int main() {
    int n,S;//3 4
    cin>>n>>S;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];//1 2 4
    }
    vector<int>ans;//to store all the possible PrintCombintions
    Printarraysumcomb(0,S,n,a,ans);
    return 0;
    

}

