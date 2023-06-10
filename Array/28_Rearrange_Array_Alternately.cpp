#include<bits/stdc++.h>
using namespace std;
int *rearrange(int* a,int n)
{
     int max_ind=n-1;
     int min_ind=0;
     int Max=a[n-1] + 1;
     for(int i=0;i<n;i++)
     {
        if(i%2==0)
        {
            a[i]=(a[max_ind]%Max)*Max + a[i];
            max_ind--;
        }
        else
        {
            a[i]=(a[min_ind]%Max)*Max + a[i];
            min_ind++;
        }
     }
     for(int i=0;i<n;i++)
     {
        a[i]=(a[i]/Max);
     }
     return a;
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
    int *b =rearrange(a,size);
    cout<<"The answer is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}