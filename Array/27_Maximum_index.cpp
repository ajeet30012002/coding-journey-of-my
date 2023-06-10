#include<bits/stdc++.h>
using namespace std;
int max_index(int* a,int size)
{
    int lmin[size],rmax[size];
    lmin[0]=a[0];
    rmax[size-1]=a[size-1];
    for(int i=1;i<size;i++)
    {
        lmin[i]=min(lmin[i-1],a[i]);
    }
    for(int i=size-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],a[i]);
    }
    int i=0,j=0,ans=0;
    while(i<size && j<size)
    {
        if(lmin[i]<=rmax[j])
        {
            ans=max(ans,(j-i));
            j++;
        }
        else{
            i++;
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
    cout<<"\nMaximum index of the elements are "<<max_index(a,size)<<endl;
}


