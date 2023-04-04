#include<bits/stdc++.h>
using namespace std;
/*
              //Naive approach
             //Time complexity:=O(n2)
            //Auxiliary space:=O(1) 
bool sorted_check(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                return false;
            }
        }
    }
    return true;
}*/
             //Second Methods
            //Time complexity:=O(n)
           //Auxiliary space:=O(1) 
bool sorted_check(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            return false;
        }
    }
    return true;
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
    cout<<"\nIf the array is sorted then it prints 1 if not then 0:"<<endl;
    cout<<sorted_check(a,size);
    return 0;
}
