#include<bits/stdc++.h>
using namespace std;
                     //First Method
                     //Time complexity:-O(n)
                     //Auxiliary space:-O(1)
/*int largest_elements(int* a,int size)
{
    int larg=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>larg)
        {
            larg=a[i];
        }
    }
    return larg;
}*/
                    //Second Method
                    //Time complexity:-O(n)
                    //Auxiliary space:-O(1)
/*
int largest_elements(int* a,int size)
{
    return *max_element(a,a+size);
}*/
                     //Third Method
                    //Time complexity:-O(n)
                    //Auxiliary space:-O(n)
int largest_elements(int* a,int size,int i)
{
    if(i==size-1)
    return a[i];
    return max(a[i],largest_elements(a,size,i+1));
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
    int i=0;
    cout<<largest_elements(a,size,i);
    return 0;
}


