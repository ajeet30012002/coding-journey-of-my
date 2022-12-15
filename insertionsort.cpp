#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main(){
int size;
cout<<"\nEnter the size of the arrays"<<"\n";
cin>>size;
int a[size];
cout<<"\nEnter the elements of the arrays"<<"\n";
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
insertionsort(a,size);
for(int i=0;i<size;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}