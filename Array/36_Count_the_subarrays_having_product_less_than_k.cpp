#include<bits/stdc++.h>
using namespace std;
int Numbers_of_subarrays(int* a,int start,int end,int size,int k)
{
    int product=1;
    int ans=0;
    while(end<size)
    {
        product*=a[end];
        while(start<=end && product>=k)
        {
            product/=a[start];
            start++;
        }
        if(product<k)
        {
            ans+=(end-start+1);
        }
        end++;
    }
    return ans;
}
int main()
{
int a[]={1, 9, 2, 8, 6, 4, 3};
int size=sizeof(a)/sizeof(a[0]);
int start=0;
int end=0;
int k=100;
cout<<Numbers_of_subarrays(a,start,end,size,k)<<endl;
return 0;
}
