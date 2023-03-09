#include<bits/stdc++.h>
using namespace std;
int chochlate_distributation(int a[],int h,int m)
{
    if(m>h)
    {
        return -1;
    }
    sort(a,a+h+1);
    int res=(a[m-1]-a[0]),ans=INT_MAX;
    for(int i=1;(i+m-1)<=h;i++)
    {
           res=(a[i+m-1]-a[i]);
           if(res<ans)
           {
            ans=min(res,ans);
           }
    }
    return ans;
}
int main()
{
    int size;
    cout << "\nEnter the size of the arrays" << endl;
    cin >> size;
    int k;
    cout<<"\nEnter the no of  studennts "<<endl;
    cin >> k;
    int a[size];
    cout << "\nEnter the elements of the arrays " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << chochlate_distributation(a, size - 1, k);
    return 0;
}
