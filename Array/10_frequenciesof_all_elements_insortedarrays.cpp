#include<bits/stdc++.h>
using namespace std;
/*
              //Time complexity:=O(n)
             //Space Complexity:=O(1) 
void frequencies_of_allelements(int* a,int n)
{
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++)
   {
    mp[a[i]]++;
   }
   for(auto it=mp.begin();it!=mp.end();it++)
   {
    cout<<it->first<<" "<<it->second<<endl;
   }
}*/

         //Time complexity:=O(n)
        //space complexity:=O(1) 
void frequencies_of_allelements(int* a,int n)
{
    int i=1,freq=1;
    while(i<n)
    {
        while(i<n && a[i-1]==a[i])
        {
            freq++;
            i++;
        }
        cout<<a[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 ||a[n-1]!=a[n-2])
    {
        cout<<a[n-1]<<" "<<"1"<<endl;
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
    cout<<"\nThe output of the array is "<<endl;
    frequencies_of_allelements(a,size);
    return 0;
}
