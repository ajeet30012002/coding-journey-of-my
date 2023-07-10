#include<bits/stdc++.h>
using namespace std;
/*
           //Brute force approach(naive approach)
          //Time complexity:=O(N2)
         //Space complexity:=O(1)  
int maxprofit(int* a,int size)
{
    int maxpro=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[j]>a[i])
             maxpro=max(maxpro,a[j]-a[i]);
        }
    }
    return maxpro;
}*/
/* 
              //Second Methods
             //Time complexity:=O(n)
            //Space complexity:=O(n)  
int maxprofit(int* a,int n)
{
    int temp[n],curr=a[n-1];
    temp[n-1]=curr;
    for(int i=n-2;i>=0;i--)
    {
         curr=max(curr,a[i]);
         temp[i]=curr;
    }
    int profit=0;
    for(int i=0;i<n;i++)
    {
        profit=max(profit,temp[i]-a[i]);
    }
    return profit;
}*/
int maxprofit(int* a,int n)
{
    int profit=0;
    int minsofar=a[0];
    for(int i=0;i<n;i++)
    {
        minsofar=min(minsofar,a[i]);
        profit=max(profit,a[i]-minsofar);
    }
    return profit;
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
    cout<<maxprofit(a,size);
    return 0;
}
