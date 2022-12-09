#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int distinctnumber(int size,int a[])
{
    unordered_set<int>s;
    for(int i=0;i<size;i++)
    {
        s.insert(a[i]);
    }
    return s.size();
}
int main(){
int size;
cout<<"\nEnter the size of the array"<<"\n";
cin>>size;
cout<<"\nEnter the elements of the array"<<"\n";
int a[size];
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
cout<<"\nthe distinct number are "<<distinctnumber(size,a);
return 0;
}