#include<bits/stdc++.h>
using namespace std;
/*
              Method 1:-Naive approach
              Time complexity:-O(n*K)
int max_sum_k_elements(int* a,int size,int k)
{
    int res=0;
    for(int i=0;i+k-1<size;i++)
    {
        int curr=0;
        for(int j=0;j<k;j++)
        {
            curr+=a[i+j];
        }
        res=max(res,curr);
    }
    return res;
}*/

          //Method 2:-efficirent(siliding window technique)
          //Time complexity:-O(n)
int max_sum_k_elements(int* a,int size,int k)
{
    int res=0,curr=0;
    for(int i=0;i<k;i++)
    {
       curr+=a[i];
    }
    res=curr;
    for(int i=k;i<size;i++)
    {
        curr+=(a[i]-a[i-k]);
        res=max(res,curr);
    }
    return res;
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
    cout<<"\nEnter the k elements "<<endl;
    int k;
    cin>>k;
    cout << "\nThe output of the array is " << endl;
    cout<<max_sum_k_elements(a, size,k);
    return 0;
}

