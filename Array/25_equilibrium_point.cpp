#include<bits/stdc++.h>
using namespace std;
/*
        Time complexity:-O(n2)
        Space Complexity:-O(1)
bool equilibrium_pt(int* a,int size)
{
    for(int i=0;i<size;i++)
    {
        int lsum=0,rsum=0;
        for(int j=0;j<i;j++)
        {
            lsum+=a[j];
        }
        for(int k=i+1;k<size;k++)
        {
            rsum+=a[k];
        }
        if(lsum==rsum)
        {
            return true;
        }
    }
    return false;
}*/
/*
            //Time complexity:-O(n)
            //Space complexity:-O(n)
bool equilibrium_pt(int* a,int size)
{
    int prefixsum[size];
    int sufixsum[size];
    cout<<"\nThe prefixsum are "<<endl;
    prefixsum[0]=a[0];
    for(int i=1;i<size;i++)
    {
        prefixsum[i]=a[i]+prefixsum[i-1];

    }
    for(int i=0;i<size;i++)
    {
        cout<<prefixsum[i]<<" ";
    }
    cout<<"\nThe sufixsum is "<<endl;
    sufixsum[size-1]=a[size-1];
    for(int i=size-2;i>=0;i--)
    {
        sufixsum[i]=a[i]+sufixsum[i+1];
    }
    for(int i=0;i<size;i++)
    {

        cout<<sufixsum[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        if(prefixsum[i]==sufixsum[i])
        {
            return true;
        }
    }
    return false;
}*/

bool equilibrium_pt(int* a,int size)
{
    int sum=accumulate(a,a+size,0);
    int leftsum=0;
    for(int i=0;i<size;i++)
    {
        leftsum+=a[i];
        if(leftsum==sum)
        {
            return true;
        }
        sum-=a[size-i-1];
    }
    return false;
}
int main()
{
    int size;
    cout << "\nEnter the size of the arrays" << endl;
    cin >> size;
    int a[size];
    cout << "\nEnter the elements of the arrays " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\nThe output of the array is " << endl;
    cout<<equilibrium_pt(a, size);
    return 0;
}
