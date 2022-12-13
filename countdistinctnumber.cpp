#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int distinctnumber(int size,int a[])
{
    unordered_set<int>s;
    for(int i=0;i<size;i++)
    {
        s.insert(a[i]);
    }
    return s.size();
}*/
int distinctnumber(int size,int a[])
{
    unordered_set<int>s(a,a+size);
    return s.size();
}
/*int distinctnumber(int size,int a[])
{
    int count=0;
    
    for(int i=0;i<size;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
            }
        }
        if(flag==false)
        {
            count++;
        }
    }
    return count;
}*/
//Code in java
/*import java.util.*;
class HelloWorld {
    public static void main(String[] args) {
        Scanner scan= new Scanner(System.in);
        System.out.println("\nEnter the size of the array");
        int size=scan.nextInt();
        int[] a= new int[size];
        for(int i=0;i<size;i++)
        {
            a[i]=scan.nextInt();
        }
        HashSet<Integer> hs= new HashSet<Integer>();
        for(int i=0;i<size;i++)
        {
            hs.add(a[i]);
        }
        System.out.println(hs.size());
    }
}*/

int main(){
int size;
cout<<"\nEnter the size of the array"<<"\n";
cin>>size;
cout<<"\nEnter the elements of the array"<<"\n";
int a[size];
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
cout<<"\nThe Distinct Number are "<<distinctnumber(size,a);
return 0;
}