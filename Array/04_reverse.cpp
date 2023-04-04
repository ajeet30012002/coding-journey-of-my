#include<bits/stdc++.h>
using namespace std;
void reverseanarray(int* a,int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        swap(a[low],a[high]);
        low++;
        high--;
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
    reverseanarray(a,size);
    cout<<"\nThe reverse of an array is:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}




