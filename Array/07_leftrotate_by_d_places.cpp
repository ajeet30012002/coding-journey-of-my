#include<bits/stdc++.h>
using namespace std;
/*
                //First methods
               //Time Complexity:=O(n)
               //Space Complexity:=O(d) 
void rotate_bydplaces(int* a,int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    int k=0;
    for(int i=d;i<n;i++)
    {
        a[k++]=a[i];
    }
    for(int i=0;i<d;i++)
    {
        a[k++]=temp[i];
    }
}*/
/*
       //Second methods(Naive Approach)
      //Time Complexity:=O(n*d)
     //Space complexity:=O(1)
void left_rotate_byone(int* a,int n)
{
    int temp=a[0];
    for(int i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}
void rotate_bydplaces(int* a ,int n,int d)
{
    d=d%n;
    for(int i=0;i<d;i++)
    {
        left_rotate_byone(a,n);
    }
}*/
/*
            //Third method
           //Time Complexity:=O(n)
          //Space Complexity:=O(1)  
void rotate_bydplaces(int* a,int n,int d)
{
    d=d%n;
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
}*/
 
                 //Fourth Method
                //Time complexity:=O(n)
               //Space Complexity:=O(1)  
void reversearr(int* a,int s,int e)
{
    while(s<=e)
    {
        int temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
    }
}
void rotate_bydplaces(int* a, int n,int d)
{
    d=d%n;
     reversearr(a,0,d-1);
     reversearr(a,d,n-1);
     reversearr(a,0,n-1);
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
    cout<<"\nHow many times you want to rotate array"<<endl;
    int k;
    cin>>k;
    rotate_bydplaces(a,size,k);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

