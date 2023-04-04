#include<bits/stdc++.h>
using namespace std;
/*
            //Naive Methods
           //Time complexity:=O(n2)
           //Space complexity:=O(1)
void move_zerostoend(int* a, int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<size;j++)
            {
                if(a[j]!=0)
                {
                    swap(a[i],a[j]);
                    break;
                }
            }
        }
    }
}*/
/*
           //Second Methods
          //Time complexity:=O(n)
          //space complexity:=O(1) 
void move_zerostoend(int* a,int n)
{
    int i=0,m=0,j=n-1;
    while(i<=j)
    {
        if(a[i]!=0)
        {
            a[m]=a[i];
            m++;
            i++;
        }
        else{
            i++;
        }
    }
    for(int i=m;i<=j;i++)
    {
        a[i]=0;
    }
}*/
void move_zerostoend(int* a,int n)
{
    int count=0,i=0,j=n-1;
    while(i<=j)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[count]);
            count++;
        }
        i++;
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
    cout<<"\nThe array whose zeros are moved is"<<endl;
    move_zerostoend(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
