#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*              Explanation of this code
In this method we always take last elements as the pivot element
the array is divided into two half first half contain elements smaller than 
pivot elements and the second half contains the elements larger than the pivot elements.
      a[]=5 13 6 9 12 11 8
      Final output= 5 6 8 9 12 11 13
                    -----***********
                    smaller| Larger [Elements]
*/
void Lpartation(int* a,int l,int h)
{
    int pivot=a[h],j=l-1;
    for(int i=0;i<=h;i++)
    {
        if(a[i+l]<pivot)
        {
            j++;
            swap(a[j],a[i+l]);
        }
    }
    swap(a[j+1],a[h]);
    for(int i=0;i<=h;i++)
    {
        cout<<a[i+l]<<" ";
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
Lpartation(a,0,size-1);
return 0;
}