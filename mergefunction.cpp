#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void mergefunction(int a[], int low, int mid, int high)
{
    int b[high + 1];
    int i = 0, j = mid + 1, k = 0;
    while (i < mid && j < high)
    {
        if (a[i] < a[j])
        {
            b[k++] = a[i];
            i++;
        }
        else
        {
            b[k++] = a[j];
            j++;
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i];
        i++;
    }
    while (j <= high)
    {
        b[k++] = a[j];
        j++;
    }
    for (int i = 0; i < k; i++)
    {
        a[i] = b[i];
    }
}
int main()
{
    int low, mid, high;
    cout << "\nEnter the low mid and high of the arrays"
         << "\n";
    cin >> low >> mid >> high;
    int a[high + 1];
    cout << "\nEnter the elements of the arrays"
         << "\n";
    for (int i = 0; i < high + 1; i++)
    {
        cin >> a[i];
    }
    mergefunction(a, low, mid, high);
    for (int i = 0; i < high + 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}