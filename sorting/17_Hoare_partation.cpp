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
        1   3   8   4   2   7   5   10
        ***second pass:
    i=0                        j=6
          for arr[i]<pivot
           i=2
          for arr[j]>pivot
           j=4
           swap(i,j)
        1   3   2   4   8   7   5   10
        ***Third pass:
    i=2                j=4
        for  arr[i]<pivot
                  j=3      i=4
            Advantages of the Hoare partations
-> It takes less comparision than the lomuto partations
-> It is better approach than the other three approach
            Disadvantages:-
->It is not an stable algorithms

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
            // return j;
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
/*                   corner cases
                Pivot is smallest
arr[]={5,   10,    9,     12}
     i=0                  h=3
Initially takes:
     i=-1                 j=4
    First pass:
    i=0 j=0;
*/
/*




*/
/*             Pivot is Largest
arr[]={12,  10,     5,      9}
      l=0                   h=3
Initially takes:
  i=-1                          j=4
  for (arr[i]<=Pivot)
      i=0           j=3
      swap(i,j)
      9,    10,     5,      12
Second pass:
                i=3  j=2
      9,    10,     5,      12
      l------------j  The elements from l to j are smaller elements
                    j-------h  The elements j to h are greater elements than Pivot elements
*/
/*




*/
/*           All the elements are same
 arr[]={5,      5,      5,      5}
        l=0                    h=3
Initially takes:
  i=-1                             h=4
First pass:-
       i=0                    j=3
       swap(i,j)
       5,       5,      5,      5
Second Pass:-
       5,       5,      5,      5
               i=1     j=2
               swap(i,j)
       5,       5,      5,      5

*/