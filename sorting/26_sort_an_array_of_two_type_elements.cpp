#include <bits/stdc++.h>
using namespace std;
/*
           Naive approch to segrate the negative and positive elements
           Time complexity:- O(n)
           Auxiliary space:- O(n)
void sort_two_type(int* a,int size)
{
    int temp[size],k=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
           temp[k++]=a[i];
        }
    }
    for(int j=0;j<size;j++)
    {
        if(a[j]>=0)
        {
            temp[k++]=a[j];
        }
    }
    for(int i=0;i<size;i++)
    {
        a[i]=temp[i];
    }
}*/
/*
           Better approch
           Time complexity:-O(n)
           Auxiliary space:-O(1)
void sort_two_type(int* a,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            swap(a[i],a[count]);
            count++;
        }
    }
}
*/
void sort_two_type(int *a, int size)
{
    int l = -1, h = size, pivot = a[0];
    while (true)
    {
        do
        {
            l++;
        } while (a[l] < 0);
        do
        {
            h--;
        } while (a[h] >= 0);
        if (l >= h)
            return;
        swap(a[l], a[h]);
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
    sort_two_type(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
