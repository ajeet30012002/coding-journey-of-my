#include<bits/stdc++.h>
using namespace std;
/*
             //Naive approach
            //Time complexity:=O(N2)
           //space complexity:=O(1)  
int tappingrain(int* a,int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=a[i];
        for(int j=0;j<i;j++)
        {
            lmax=max(lmax,a[j]);
        }
        int rmax=a[i];
        for(int j=i+1;j<n;j++)
        {
            rmax=max(rmax,a[j]);
        }
        res+=(min(lmax,rmax)-a[i]);
    }
    return res;
}*/

         //Time complexity:=O(n)
        //Space complexity:=O(n+n) 
int tappingrain(int* a,int n)
{
    int water=0;
    int lmax[n],rmax[n];
    lmax[0]=a[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],a[i]);
    }
    rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],a[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        water+=min(lmax[i],rmax[i]) - a[i];
    }
    return water;
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
    cout<<"\nThe output of the array is "<<endl;
    cout<<tappingrain(a,size);
    return 0;
}
