#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[] = {1,3,4,2,2};
int size=sizeof(a)/sizeof(a[0]);
for(int i=0;i<size;i++)
{
    a[a[i]%size]+=size;
}
for(int i=0;i<size;i++)
{
    if(a[i]/size>=2)
    {
        cout<<i<<endl;
    }
}
return 0;
}
