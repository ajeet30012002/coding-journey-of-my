#include <bits/stdc++.h>
using namespace std;
/*int maximumsubarray_sum(int* a,int n)
{
    int maxsum=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
             maxsum=max(maxsum,sum);
            sum+=a[j];

        }
    }
    return maxsum;
}*/
int maximumsubarray_sum(int* a,int n)
{
    int res=INT_MIN;
    int currsum=a[0];
    for(int i=1;i<n;i++)
    {
        currsum+=a[i];
        currsum=max(currsum,a[i]);
        res=max(res,currsum);
    }
    return res;
}
/*int maximumsubarray_sum(int *a, int n)
{
    int maxsum = a[0];
    int res = a[0];
    for (int i = 1; i < n; i++)
    {
        maxsum = max(maxsum + a[i], a[i]);
        res = max(res, maxsum);
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
    cout << maximumsubarray_sum(a, size);
    return 0;
}
