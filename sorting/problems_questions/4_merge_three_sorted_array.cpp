#include<bits/stdc++.h>
using namespace std;
                        //****** First Methods
/*void merge_Three_sorted_array(int A[],int B[],int C[],int n,int m,int p)
{
    vector<int>ans;
    int i=0,j=0,k=0;
    while(i<n ||j<m ||k<p)
    {
        int a=INT_MAX,b=INT_MAX,c=INT_MAX;
        if(i<n)
        {
            a=A[i];
        }
        if(j<m)
        {
            b=B[j];
        }
        if(k<p)
        {
            c=C[k];
        }
        if(a<=b && a<=c)
        {
            ans.push_back(a);
            i++;
        }
        if(b<=a && b<=c)
        {
            ans.push_back(b);
            j++;
        }
        if(c<=a && c<=b)
        {
            ans.push_back(c);
            k++;
        }
    }
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
}*/
                        // Second Method
int main()
{
cout<<"\nEnter the sizes of the arrays "<<endl;
int size1,size2,size3;
cin>>size1>>size2>>size3;
int a[size1],b[size2],c[size3];
cout<<"\nEnter the first array"<<endl;
for(int i=0;i<size1;i++)
{
    cin>>a[i];
}
cout<<"\nEnter the second array"<<endl;
for(int i=0;i<size2;i++)
{
    cin>>b[i];
}
cout<<"\nEnter the Third array"<<endl;
for(int i=0;i<size3;i++)
{
    cin>>c[i];
}
merge_Three_sorted_array(a,b,c,size1,size2,size3);
return 0;
}
