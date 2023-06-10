#include<bits/stdc++.h>
using namespace std;
void minimumGroup_flips(int* a,int size)
{
    for(int i=1;i<size;i++)
    {
        if(a[i]!=a[i-1])
        {
            if(a[i]!=a[0])
            {
                cout<<"from "<<i<<" to ";
            }
            else
            {
                cout<<i-1<<endl;
            }
        }
    }
    if(a[size-1]!=a[0])
    {
        cout<<size-1<<endl;
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
    cout << "\nThe output of the array is " << endl;
    minimumGroup_flips(a, size);
    return 0;
}
