#include<bits/stdc++.h>
using namespace std;
      //Time complexity:=O(n)
     //Space complexity:=O(1) 
int maxprofit(int* a,int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i])
        {
            profit+=a[i]-a[i-1];
        }
    }
    return profit;
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
    cout<<maxprofit(a,size);
    return 0;
}