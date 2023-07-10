#include<bits/stdc++.h>
using namespace std;
int subarray_with_zero(int* a,int size)
{
    int maxlen=0;
    int sum=0;
    map<int,int>mp;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
        if(sum==0)
        {
            maxlen=i+1;
        }
        if(mp.find(sum)!=mp.end())
        {
            maxlen=max(maxlen,i-mp[sum]);
        }
        else
        {
            mp[sum]=i;
        }
    }
    return maxlen;
}
int main()
{
int a[]={15,-2,2,-8,1,7,10,23};
int size=sizeof(a)/sizeof(a[0]);
cout<<subarray_with_zero(a,size);
return 0;
}
