#include <bits/stdc++.h>
using namespace std;
/*
                          //Method 1
                   //Time complexity:-O(n)
                   //space complexity:-O(1)
                   // Arrays has to be sorted
void frequency(int* a,int size)
{
    int freq=1,i=1;
    int ele=a[0];
    while(i<size)
    {
        if(a[i-1]==a[i])
        {
            i++;
            freq++;
        }
        else
        {
            cout<<ele<<"->"<<freq<<endl;
            ele=a[i];
            i++;
            freq=1;
        }
    }
    if(i==1 ||a[size-2]!=a[size-1])
    {
        cout<<a[size-1]<<"->"<<freq<<endl;
    }
}*/
/*
                //Method 2
        //Time complexity:-O(n)
        //Space complexity:-O(n)
        // Implementing by using hashmaps
void frequency(int* a,int size)
{
    map<int,int> mp;
    for(int i=0;i<size;i++)
    {
        mp[a[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"->"<<it->second<<endl;
    }
}*/
/*
                            //Method 3
                 //Time complexity:-O(mlogn) where m is didtinct elements
                 //space complexity:-O(n)
void frequencyutil(int* a,int low,int high,vector<int> &ans)
{
    if(a[low]==a[high])
    {
        ans[a[low]]+=(high-low) + 1;
    }
    else
    {
            int mid=((high-low)/2+low);
            frequencyutil(a,mid+1,high,ans);
            frequencyutil(a,low,mid,ans);
    }
}
void frequency(int* a,int size)
{
    vector<int> ans(a[size-1]+1,0);
    frequencyutil(a,0,size-1,ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<i<<"->"<<ans[i]<<endl;
    }
}*/
/*
                    //Method 4
                    //Time complexity:-O(n)
                    //Space complexity:-O(1)
int largest(int* a,int size)
{
    int large=a[0];
    for(int i=1;i<size;i++)
    {
        large=max(large,a[i]);
    }
    return large;
}
void frequency(int* a,int size)
{
    int maximum=largest(a,size);
    for(int i=0;i<size;i++)
    {
        a[i]--;
    }
    for(int i=0;i<size;i++)
    {
        a[a[i]%size]+=size;
    }
    for(int i=0;i<size;i++)
    {
        cout<<(i+1)<<"->"<<a[i]/size<<endl;
    }
}*/
int largest(int *a, int size)
{
    int large = a[0];
    for (int i = 1; i < size; i++)
    {
        large = max(large, a[i]);
    }
    return large;
}
void frequency(int *a, int size)
{
    int maxele = largest(a, size);
    int i = 0;
    while (i < size)
    {
        if (a[i] <= 0 || a[i] > maxele || a[i] > size)
        {
            i++;
            continue;
        }
        int ind = a[i] - 1;
        if (a[ind] > 0)
        {
            a[i] = a[ind];
            a[ind] = -1;
        }
        else
        {
            a[ind]--;
            i++;
            a[i]=0;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            a[i]=-a[i];
        }
        else
        {
            a[i]=0;
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<(i+1)<<"->"<<a[i]<<endl;
    }
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
    frequency(a, size);
}
