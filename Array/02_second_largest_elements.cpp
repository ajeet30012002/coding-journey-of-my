#include<bits/stdc++.h>
using namespace std;
/*
               //First Methds
              //Time complexity:=O(nlogn)
             //Auxiliary space:=O(1)
int secondlargest_elements(int* a,int size)
{
    sort(a,a+size,greater<int>());
    for(int i=1;i<size;i++)
    {

        if(a[i-1]!=a[i])
        {
            return a[i];
        }
    }
    return -1;
}*/
/*
               //Second Methods
              //Time complexity:=O(n)
             //Space complexity:=O(1)
int largest_elements(int a[],int size)
{
    int large=0;
    for(int i=1;i<size;i++)
    {
        if(a[large]<a[i])
        {
            large=i;
        }
    }
    return a[large];
}
int secondlargest_elements(int a[],int size)
{
    int big=largest_elements(a,size);
    int res=-1;
    for(int i=0;i<size;i++)
    {
        if(big!=a[i])
        {
            if(res==-1)
            {
                res=i;
            }
            if(a[i]>a[res])
            {
                res=i;
            }
        }
    }
    return res;
}*/
int secondlargest_elements(int a[],int n)
{
    int res=-1,large=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[large])
        {
            res=large;
            large=i;
        }
        else if(a[i]!=a[large])
        {
            if(res==-1||a[res]<a[i])
            {
                res=i;
            }
        }
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
    cout<<"\nThe second largest elements are:"<<endl;
    cout<<secondlargest_elements(a,size);
    return 0;
}



