#include<bits/stdc++.h>
using namespace std;
int getsum(int i,int j,int* b)
{
    if(i<=0)
    return (b[j]);
    else
    {
    return (b[j]-b[i-1]);
    }
}
void prefixsum(int* a,int size)
{
    int b[size];
    int curr=0;
    for(int i=0;i<size;i++)
    {
         curr+=a[i];
         b[i]=curr;
    }
   cout<<getsum(0,2,b)<<endl;
   cout<<getsum(1,3,b)<<endl;
   cout<<getsum(2,6,b)<<endl;
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
    prefixsum(a, size);
    
    return 0;
}



