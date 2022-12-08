#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Method 1 Lograthmic Approach
/*int main(){
int n;
cout<<"\nEnter the digit "<<endl;
cin>>n;
cout<<floor(log10(n)+1);
return 0;
}*/
//Method 2 Iterative Approach
/*int main()
{
int n,count=0;
cout<<"\nEnter the digit "<<endl;
cin>>n;
while(n>0)
{
    if(n>0)
    {
        count++;
    }
    n=n/10;
}
cout<<"\nThe no of digits are "<<count<<endl;
}*/
//method 3 Recursive Approach
int countdigit(int x)
{
    if(x==0)
    return 0;
    return 1 + countdigit(x/10);
}
int main()
{
int n;
cout<<"\nEnter the digit "<<endl;
cin>>n;
cout<<countdigit(n);
}