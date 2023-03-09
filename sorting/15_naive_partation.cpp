#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*                  Explanation of the code
    In this code we choose the pivot index from the middle of the Arrays and after that we 
    just take another temporarry array and put the all elements according to it ascending order.
                            Advantages:-
-> It is an stable algorithm than lumato and hoare partation algorithms
->Time complexity O(n)
                            Disadvantages:-
->space complexity O(n)
*/
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