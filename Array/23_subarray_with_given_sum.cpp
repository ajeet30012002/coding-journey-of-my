#include<bits/stdc++.h>
using namespace std;
/*
              Method 1: Navie Approach
              Time complexity:-O(n2)
void subarray_sum_equals_to(int* a,int size,int sum)
{
    int curr=0;
    for(int i=0;i<size;i++)
    {
        curr=a[i];
        if(curr==sum)
        {
            cout<<"\nThe sum of elements is equals "<<i<<" "<<endl;
        }
        else
        {
            for(int j=i+1;j<size;j++)
            {
                curr+=a[j];
                if(curr==sum)
                {
                    cout<<"\nThe sum of the elements are "<<i<<" to "<<j<<endl;
                    return;
                }
            }
        }
    }
}*/
void subarray_sum_equals_to(int* a,int size,int sum)
{
    int curr=0;
    int s=0;
    for(int i=0;i<size;i++)
    {
        curr+=a[i];
        while(sum<curr)
        {
            curr-=a[s];
            s++;
        }
        if(curr==sum)
        {
            cout<<s<<" "<<i<<endl;
        }
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
    cout<<"\nEnter the sum "<<endl;
    int sum;
    cin>>sum;
    cout << "\nThe output of the array is " << endl;
    subarray_sum_equals_to(a, size,sum);
    return 0;
}


