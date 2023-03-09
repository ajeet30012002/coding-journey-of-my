#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*int Lpartation(int *a, int l, int r)
{
    int pivot = a[r], j = l - 1;
    for (int i = l; i <= r; i++)
    {
        if (a[i] < pivot)
        {
            j++;
            swap(a[j], a[i]);
        }
    }
    swap(a[j+1],a[r]);
    return j+1;
}*/
int Hpartation(int* a,int l,int r)
{
    int pivot=a[l],i=l-1,j=r+1;
    while(true)
    {
        do
        {
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i>=j)
        return j;
        swap(a[i],a[j]);
    }
}
int Kthsmallestno(int *a, int l, int r, int k)
{
    while (l <= r)
    {
        int p = Hpartation(a, l, r);
        if(p==k-1)
        {
            return a[p];
        }
        else if(p>k-1)
        {
            r=p-1;
        }
        else
        {
            l=p+1;
        }
    }
    return -1;
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
    int k;
    cin >> k;
    cout << Kthsmallestno(a, 0, size - 1, k);
    return 0;
}