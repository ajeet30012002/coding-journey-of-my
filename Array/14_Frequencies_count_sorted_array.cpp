#include<bits/stdc++.h>
using namespace std;
/*void frequencies(int* a, int size)
{
    map<int,int>mp;
    for(int i=0;i<size;i++)
    {
        mp[a[i]]++;
    }
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}*/
void frequencies(int* a,int size)
{
    int i=1,freq=1;
    while(i<size)
    {
        while(i<size && a[i]==a[i-1])
        {
            freq++;
            i++;
        }
        cout<<a[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(size==1 || a[size-1]!=a[size-2])
        cout<<a[size-1]<<" "<<"1"<<endl;
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
    frequencies(a,size);
    return 0;
}

