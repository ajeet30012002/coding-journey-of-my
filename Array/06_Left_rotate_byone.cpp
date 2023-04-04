#include<bits/stdc++.h>
using namespace std;
void left_rotate_byone(int* a,int size)
{
    int temp=a[0];
    for(int i=1;i<size;i++)
    {
        a[i-1]=a[i];
    }
    a[size-1]=temp;
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
    cout<<"\nThe array whose zeros are moved is"<<endl;
    left_rotate_byone(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
