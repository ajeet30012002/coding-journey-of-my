#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void unionarr(int a[],int size1,int b[],int size2)
{
    int c[size1+size2];
    int i=0,j=0,k=0;
    while(i<size1 && j<size2)
    {
        if(i>=0 && a[i-1]==a[i])
        {
            i++;
            continue;
        }
        if(j>=0 && b[j-1]==b[j])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=a[i];
            i++;
            j++;
        }
    }
    while(i<size1)
    {
        c[k++]=a[i++];
    }
    while(j<size2)
    {
        c[k++]=b[j++];
    }
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
}
int main(){
int size;
cout<<"\nEnter the size of the First arrays"<<"\n";
cin>>size;
int a[size];
cout<<"\nEnter the elements of the First arrays"<<"\n";
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
cout<<"\nEnter the size of the Second arrays"<<"\n";
int size2;
cin>>size2;
cout<<"\nEnter the elements of the second arrays"<<"\n";
int a2[size2];
for(int i=0;i<size2;i++)
{
   cin>>a2[i];
}
unionarr(a,size,a2,size2);
return 0;
}