#include<bits/stdc++.h>
using namespace std;
int smallest_positive(int* a,int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]<1 || a[i]>size || a[i]==i+1 || a[i]==a[a[i]-1])
        {
            continue;
        }
        swap(a[i],a[a[i]-1]);
        i--;
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]!=i+1)
        {
            return i+1;
        }
    }
    //1 2 3 4 5 
    //0 1 2 3 4 
    //size+1=6
    return size+1;
}
int main()
{
int size;
cout<<"\nEnter the size of the array"<<endl;
cin>>size;
int a[size];
for(int i=0;i<size;i++)
{
     cin>>a[i];
}
cout<<"\nThe answer is ";
cout<<smallest_positive(a,size)<<endl;
return 0;
}
