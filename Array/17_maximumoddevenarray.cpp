#include<bits/stdc++.h>
using namespace std;
int maxoddeven(int* a,int size)
{
    int res=1;
    for(int i=0;i<size;i++)
    {
        int curr=1;
        for(int j=i+1;j<size;j++)
        {
            if((a[j]%2==0 && a[j-1]%2!=0) ||(a[j]%2!=0 && a[j-1]%2==0))
            {
                curr++;
            }
            else
            {
                break;
            }
        }
        res=max(res,curr);
    }
    return res;
}
/*
               //Method 2: Efficient
              //Time complexity:=O(n)
             //Space complexity:=O(1)  
int maxoddeven(int* a,int size)
{
      int res=1,curr=1;
      for(int i=1;i<size;i++)
      {
        if((a[i]%2==0 && a[i-1]%2!=0) || (a[i-1]%2==0 && a[i]%2!=0))
        {
            curr++;
            res=max(res,curr);
        }
        else{
            curr=1;
        }
      }
      return res;
}*/
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
    cout << maxoddeven(a, size);
    return 0;
}