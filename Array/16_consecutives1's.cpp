#include <bits/stdc++.h>
using namespace std;
/*
            //Naive approach
           //Time complexity:=O(n2)
          //Space complexity:=O(1)  
int consecutive1_s(int *a, int n)
{
    int max1 = 0, count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] == 1)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        max1 = max(max1, count);
    }
    return max1;
}*/
int consecutive1_s(int* a, int size)
{
    int count=0,ans=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            count=0;
        }
        else{
            count++;
            ans=max(ans,count);
        }
    }
    return ans;
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
    cout << consecutive1_s(a, size);
    return 0;
}
