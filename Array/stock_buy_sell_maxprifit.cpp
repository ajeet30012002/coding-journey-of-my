#include<bits/stdc++.h>
using namespace std;
int max_profit(int* a,int low,int high)
{
     if(high<=low)
     {
        return 0;
     }
     int profit=0;
     for(int i=low;i<high;i++)
     {
        for(int j=i+1;j<=high;j++)
        {
            if(a[j]>a[i])
            {
                int curr_profit=(a[j]-a[i]) + max_profit(a,low,i-1) + max_profit(a,j+1,high);
                profit=max(profit,curr_profit);
            }
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
    cout<<max_profit(a,0,size-1);
    return 0;
}