#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*               Explanation of the code
    size=8  pivot=arr[0]=5;
    h=7
        5   3   8   4   2   7   1   10
        l=0                         h=7
        ***first time:
    i=-1                                j=8
          for arr[i]<pivot
          i=0
          for arr[j]>pivot
          j=6
          swap(i,j)
        ***second pass:
    i=0                        j=6
          for arr[i]<pivot
           i=2
          for arr[j]>pivot
           j=4
           swap(i,j)
        ***Third pass:
    i=2                j=4
        for  arr[i]<pivot
                      j=4      i=5
*/
void Hpartition(int *a, int l, int h)
{
    int pivot = a[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (a[i] < pivot);

        do
        {
            j--;
        } while (a[j] > pivot);
        if (i >= j)
        {
            break;
        }
        swap(a[i], a[j]);
    }
    for (int i = l; i <= h; i++)
    {
        cout << a[i] << " ";
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
    int p = size / 2;
    Hpartition(a, 0, size - 1);
    return 0;
}