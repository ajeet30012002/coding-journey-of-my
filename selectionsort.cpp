#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int size)
{
    int i,j,min_indx;
    for(i=0;i<size;i++)
    {
        min_indx=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[min_indx])
            {
                min_indx=j;
            }
        }
        if(min_indx!=i)
        {
            swap(a[i],a[min_indx]);
        }
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
selectionsort(a,size);
for(int i=0;i<size;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}