#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool primarlytest(int n)
{
    if(n==1)
    return false;
    if(n==2 || n==3)
    return true;
    if(n%2==0 || n%3==0)
    return false;
    else
    {
        for(int i=5;i*i<=n;i=i+6)
        {
            if((n%i)==0 ||(n%(i+2)==0))
            {
                return false;
            }
        }
    }
    return true;
}
int main(){
int n;
cout<<"\nEnter a number"<<endl;
cin>>n;
if(primarlytest(n)==1)
cout<<"Prime";
else
{
    cout<<"Not a prime";
}
return 0;
}