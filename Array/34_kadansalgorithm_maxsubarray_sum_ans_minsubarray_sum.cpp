#include<bits/stdc++.h>
using namespace std;
/*                       Kadane's Algorithm
Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
*/
int largestsum(int* a,int size)
{
    int ans=INT_MIN;
    int curr=a[0];
    for(int i=1;i<size;i++)
    {
        curr+=a[i];     
        ans=max(curr,ans);
        if(curr<0)
        {
            curr=0;
        }
    }
    /*
       for(int i=1;i<size;i++)
       {
        curr=max(curr+a[i],a[i]);
        ans=max(curr,ans);
       }
    */
    return ans;
}
/* 
                smallest sum of the arrays
*/
int smallestsum(int* a,int size)
{
    int ans=INT_MAX;
    int curr=a[0];
    for (int i = 0; i < size; i++)
    {
        curr=min(curr+a[i],a[i]);
        ans=min(ans,curr);
    }
    /*
    for(int i=0;i<size;i++)
    {
        curr+=a[i];
        ans=min(ans,curr);
        if(curr>0)
        {
            curr=0;
        }
    }
    */
    return ans;
}
int main()
{
int a[]={3,-4, 2,-3,-1, 7,-5};
int size=sizeof(a)/sizeof(a[0]);
cout<< largestsum(a,size)<<endl;
// cout<<smallestsum(a,size)<<endl;
return 0;
}
