#include<bits/stdc++.h>
using namespace std;
/*
                   //time complexity:-O(n*max)
                   //Space somplexity:-O(1)
int max_appering_ele(int a[],int b[],int c[],int size,int size1)
{
     for(int i=0;i<size1;i++)
     {
        for(int j=b[i];j<=c[i];j++)
        {
            a[j]++;
        }
     }
     int m=*max_element(a,a+size);
     for(int i=0;i<size;i++)
     {
        if(m==a[i])
        {
            return i;
        }
     }
     return -1;
}*/

               //Time complexity:-O(n)
               //Space complexity:-O(n)
int max_appering_ele(int* a,int* b,int* c,int size,int size1)
{
    a[size]={0};
    for(int i=0;i<size1;i++)
    {
        a[b[i]]++;
        a[c[i]+1]--;
    }
    int prefixsum[size];
    prefixsum[0]=a[0];
    for(int i=1;i<size;i++)
    {
        prefixsum[i]=prefixsum[i-1]+a[i];
    }
    int m=*max_element(prefixsum,prefixsum+size);
    for(int i=0;i<size;i++)
    {
        if(m==prefixsum[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
int size;
cout<<"\nEnter the size of the frquency "<<endl;
cin>>size;
int a[size]={0};
cout<<"\nEnter the size of the first array range "<<endl;
int size1;
cin>>size1;
cout<<"\nEnter the first array range "<<endl;
int b[size1];
for(int i=0;i<size1;i++)
{
  cin>>b[i];
}
cout<<"\nEnter the second array range "<<endl;
int c[size1];
for(int i=0;i<size1;i++)
{
  cin>>c[i];
}
cout<<"The maximum appering elements are "<<max_appering_ele(a,b,c,size,size1)<<endl;
return 0;
}
