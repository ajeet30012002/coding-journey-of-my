#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Npartition(int* a,int l,int h,int p)
{
      int temp[h-l+1],index=0;
      for(int i=0;i<=h;i++)
      {
        if(a[i+l]<a[p])
        {
            temp[index]=a[i+l];
            index++;
        }
      }
      temp[index++]=a[p];
      for(int i=0;i<=h;i++)
      {
        if(a[i+l]>a[p])
        {
            temp[index]=a[i+l];
            index++;
        }
      }
      for(int i=0;i<=h;i++)
      {
        a[i+l]=temp[i+l];
      }
} 
int main()
{
int size;
cout<<"\nEnter the size of the arrays"<<endl;
cin>>size;
int a[size];
cout<<"\nEnter the elements of the arrays "<<endl;
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
int p=size/2;
Npartition(a,0,size-1,p);
for(int i=0;i<size;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}