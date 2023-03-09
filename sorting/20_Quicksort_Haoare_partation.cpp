#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
   Advantages:-
   -> Hoare's parattion are much faster than the lumato partation[3 Times]


   ->Hoares is not fixing the position of the pivot elements wher is in lumato partation the pivot elements are fixed. That is why the calling in lumato partations are:-
   quicksort(a,l,p-1);
   quicksort(a,p+1,h);

   
   ->In hoares partations the positions of the pivot elements are not fixed that is why this calling occurs
   quicksort(a,l,p);
   quicksort(a,p+1,h);
*/
int Hpartation(int* a,int l,int h)
{
    int pivot=a[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do{
            i++;
        }while(a[i]<pivot);
    do
    {
        j--;
    } while (a[j]>pivot);
    if(i>=j)
    return j;
    swap(a[i],a[j]); 
    } 
}
void Quicksort(int *a,int l,int h)
{
    if(l<h)
    {
        int p=Hpartation(a,l,h);
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