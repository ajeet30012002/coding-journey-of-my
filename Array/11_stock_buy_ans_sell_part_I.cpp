#include<bits/stdc++.h>
using namespace std;
int maxprofit(int* a,int start,int end)
{
    if(end<=start)
    {
        return 0;
    }
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(a[j]>a[i])
            {
                int curr_profit=(a[j]-a[i]) + maxprofit(a,start,i-1) + maxprofit(a,j+1,end);
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
    cout<<"\nThe output of the array is "<<endl;
    cout<<maxprofit(a,0,size-1);
    return 0;
}