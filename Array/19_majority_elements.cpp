#include<bits/stdc++.h>
using namespace std;
/*
            // Method: Naive
            // Time complexity:=O(n2)
            // space complexity:=O(1)
int majorityelement(int* a,int n)
{
  int maxcount=0,index=0;
  for(int i=0;i<n;i++)
  {
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
            count++;
        }
    }
    if(count>maxcount)
    {
        maxcount=count;
        index=i;
    }
  }
  if(maxcount>n/2)
   return a[index];
   else
   return -1;
}*/
/*
                //This code not run for the some test cases
int majorityelements(int* a,int size)
{
    int res=0,maxcount=0,count=1;
    sort(a,a+size);
    for(int i=1;i<size;i++)
    {
        if(a[res]==a[i])
        {
            count++;
            maxcount=max(maxcount,count);
        }
        else{
            res++;
            count=1;
        }
    }
    if(maxcount>size/2)
    {
        return a[res];
    }
    return -1;
}*/
             //Method:Efficient(moore's vooting)
             //Time complexity:=O(n)
             //Space complexity:=O(1)
int majorityelements(int* a,int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)
    {
        if(a[res]==a[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[res]==a[i])
        {
            cnt++;
        }
    }
    if(cnt>n/2)
    {
        return a[res];
    }
    return -1;
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
    cout<<majorityelements(a,size)<<endl;
    return 0;
}
