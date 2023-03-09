#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
    {8,    4,   7,  9,  3,  10,   5}

qsort(0,6)      8,4,7,9,3,10,5  by Lumato partation
                {4,3,5,9,8,10,7}
                  /                            \
                 /                              \
qsort(0,1)     {4,3} by lumato    qsort(3,6)  {9,8,10,7}  
                {3,4}                         {7,8,10,9}
                /  \                           /           \
               /    \                         /             \
qsort(0,-1)      qsort(1,1)            qsort(3,2)    qsort(4,6) {8,10,9} 
*/
int Lpartation(int* a,int l,int h)
{
    int pivot=a[h],j=l-1;
    for(int i=0;i<=h;i++)
    {
        if(a[l+i]<pivot)
        {
            j++;
            swap(a[i+l],a[j]);
        }
    }
    swap(a[j+1],a[h]);
    return j+1;
}
void Quicksort(int* a,int l,int h)
{
    if(l<h)
    {
        int p=Lpartation(a,l,h);
        Quicksort(a,l,p-1);
        Quicksort(a,p+1,h);
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
Quicksort(a,0,size-1);
for(auto x:a)
{
    cout<<x<<" ";
}
return 0;
}