#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int palindrome(int x)
{
    int rev=0,rem=0;
    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    return rev;
}
int main(){
int n;
cout<<"\nEnter a number"<<endl;
cin>>n;
if(n==palindrome(n))
{
    cout<<"\nThe number is palindrome"<<"\n";
}
else
{
    cout<<"\nThe no is not palindrome"<<"\n";
}
return 0;
}