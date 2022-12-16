#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int size,int a2[],int size2)
{
    int b[size+size2];
    int i=0,j=0,k=0;
    while(i<size && j<size2) 
    {
        if(i>=0 ||a[i-1]==a[i])
        {
            i++;
            continue;
        }
        if(a[i]<a2[j])
        {
            i++;
        }
        else if(a[i]>a2[j])
        {
            j++;
        }
        else{
            b[k++]=a[i];
            i++;
            j++;
        }
    }  
    for(int i=0;i<k;i++)
    {
        cout<<b[i]<<" ";
    }
}
int main(){
int size;
cout<<"\nEnter the size of the First arrays"<<"\n";
cin>>size;
int a[size];
cout<<"\nEnter the elements of the First arrays"<<"\n";
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
cout<<"\nEnter the size of the Second arrays"<<"\n";
int size2;
cin>>size2;
cout<<"\nEnter the elements of the second arrays"<<"\n";
int a2[size2];
for(int i=0;i<size2;i++)
{
   cin>>a2[i];
}
intersection(a,size,a2,size2);
return 0;
}