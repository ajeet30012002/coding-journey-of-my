#include<bits/stdc++.h>
using namespace std;
              //Time complexity:=O(2^n)
              //spac comlexity:=O(n)
int safe(int n,int k)
{
    if(n==1)
    {
        return 1;
    }
    return ((safe(n-1,k)+k-1)%n)+1;
}
/*
                   //Time complexity:=O(n)
                   //Space complexity:=O(n)
int safe(int n,int k)
{
    vector<int> ans;
    for(int i=1;i<=n;i++)
    {
        ans.push_back(i);
    }
    int i=0;
    while(ans.size()!=1)
    {
        i=(i+k-1)%n;
        ans.erase(ans.begin()+i);
        n=ans.size();
    }
    return ans[0];
}*/
int main()
{
int n=4;
int k=2;
cout<<safe(n,k)<<endl;
return 0;
}
