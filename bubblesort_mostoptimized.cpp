#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int size)
{
    bool flag;
    for(int i=0;i<size-1;i++)
    {
        flag=false;
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=true;
            }
        }
        if(flag==false)
        {
            break;
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
bubblesort(a,size);
for(int i=0;i<size;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}