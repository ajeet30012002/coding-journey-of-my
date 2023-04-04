#include<bits/stdc++.h>
using namespace std;
int Leader(int* a,int size,int* temp)
{
    int curr=a[size-1];
    temp[0]=curr;
    int k=1;
    for(int i=size-2;i>=0;i--)
    {
        if(a[i]>curr)
        {
            curr=a[i];
          temp[k++]=curr;
        }
    }
    return k;
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
    int temp[size];
    int k=Leader(a,size,temp);
    for(int i=0;i<k;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}

