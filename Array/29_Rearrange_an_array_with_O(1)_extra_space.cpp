#include<bits/stdc++.h>
using namespace std;
/*
Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that the transformed array arrT[i] becomes arr[arr[i]].*/
int* rearrange(int* a,int size)
{
    int Max=size;
    for(int i=0;i<size;i++)
    {
        a[i] = a[i] + ((a[a[i]])%Max)*Max;
    }
    for(int i=0;i<size;i++)
    {
        a[i]=a[i]/Max;
    }
    return a;
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
    int *b =rearrange(a,size);
    cout<<"The answer is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
