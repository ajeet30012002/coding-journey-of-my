#include<bits/stdc++.h>
using namespace std;
/*
         //Naive approach
        //Time complexity:=O(n2)
       //Space complexity:=O(1)  
int maxdiff(int* a,int n)
{
    int large=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            int x=a[i]-a[j];
            if(x>large)
            {
                large=x;
            }
        }
    }
    return large;
}*/
int maxdiff(int* a,int n)
{
    int res=a[1]-a[0],minval=a[0];
    for(int i=1;i<n;i++)
    {
         res=max(res,a[i]-minval);
         minval=min(a[i],minval);
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
    cout<<"\nThe output of the array is "<<endl;
    cout<<maxdiff(a,size);
    return 0;
}
/*
int large=INT_MIN;
for(size-1 to 0)
  for(0 to i)
     if a[i]-a[j] <large
       large=a[i]-a[j];
print(large)
*/