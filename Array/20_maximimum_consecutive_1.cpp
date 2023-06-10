#include<bits/stdc++.h>
using namespace std;
int maxconsecutive_ones(int* a,int size)
{
    int res=0,count=0;
    for(int i=0;i<size;i++)
    {
      if(a[i]==1)
      {
       count++;
      }
      else
      {
      count=0;
      }
      res=max(res,count);
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
    cout << "\nThe output of the array is " << endl;
    cout << maxconsecutive_ones(a, size);
    return 0;
}