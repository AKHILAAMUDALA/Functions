#include <iostream>
#include<vector>
using namespace std;
void PrintCombinationSum(int N,vector<int>&ds)
{
    //base case when your N becomes Zero we have the Combination
    if(N==0)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    //call all possible 1 to N to get sum n
    for(int i=1;i<=N;i++)
    {
        ds.push_back(i);
        PrintCombinationSum(N-i,ds);
        ds.pop_back();//while coming back remove the recent pushed element
    }
}
int main() {
    int N;
    cin>>N;
    vector<int>ans;//to store all the possible PrintCombintions
    PrintCombinationSum(N,ans);
    return 0;
    

}
