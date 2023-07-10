#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
                        Time complexity:=O(n+m);
                        Space complexity:=O(n+m);
int main()
{
int arr1[]={1,2,2,3,4,4,5,5};
int arr2[]={1,1,2,2,2,3,3,3,4,4,5,6,6,7,8};
int size1=sizeof(arr1)/sizeof(arr1[0]);
int size2=sizeof(arr2)/sizeof(arr2[0]);
int k=1;
for(int i=1;i<size1;i++)
{
    if(arr1[i-1]!=arr1[i])
    {
        arr1[k]=arr1[i];
        k++;
    }
}
int l=1;
for(int i=1;i<size2;i++)
{
    if(arr2[i-1]!=arr2[i])
    {
        arr2[l]=arr2[i];
        l++;
    }
}
vector<int>ans;
int i=0,j=0,p=0;
while(i<k && j<l)
{
    if(arr1[i]==arr2[j])
    {
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j])
    {
        ans.push_back(arr1[i]);
        i++;
    }
    else if(arr2[j]>arr1[i])
    {
        ans.push_back(arr2[j]);
        j++;
    }
}
while(i<k)
{
    ans.push_back(arr1[i]);
    i++;
}
while(j<l)
{
    ans.push_back(arr2[j]);
    j++;
}
for(auto it=ans.begin();it!=ans.end();it++)
{
    cout<<*it<<" ";
}
return 0;
}
*/
/*
int main()
{
    int arr1[] = {1, 2, 2, 3, 4, 4, 5, 5};
    int arr2[] = {1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 6, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    set<int> s1;
    for (int i = 0; i < size1; i++)
    {
        s1.insert(arr1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        s1.insert(arr2[i]);
    }
    for (auto it = s1.begin(); it != s1.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}*/
int main()
{
    int a[]={1, 1, 2, 2, 2, 4, 5, 5, 6, 6, 7};
    int size1=sizeof(a)/sizeof(a[0]);
    int b[]={3, 3, 4, 8, 8, 9, 9, 10};
    int size2=sizeof(b)/sizeof(b[0]);
    map<int , int>mp;
    for(int i=0;i<size1;i++)
    {
        mp[a[i]]++;
    }
    for(int i=0;i<size2;i++)
    {
        mp[b[i]]++;
    }
    cout<<"\nThe answer is "<<endl;
    for(auto it:mp)
    {
        cout<<it.first<<" ";
    }
    return 0;
}
