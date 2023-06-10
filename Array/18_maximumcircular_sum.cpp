#include<bits/stdc++.h>
using namespace std;
/*
                //Method 2:Efficient
                //Time complexity:=O(n)
                //Space complexity:=O(1)

*/              
int normal_sum(int* a,int size)
{
    int max_sum=a[0];
    int curr=a[0];
    for(int i=1;i<size;i++)
    {
        curr=max(curr+a[i],a[i]);
        max_sum=max(max_sum,curr);
    }
    return max_sum;
}    
int maxsum_circular(int* a,int size)
{
    int normalsum=normal_sum(a,size);
    if(normalsum<0)
    return normalsum;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
        a[i]=-a[i];
    }
    int max_circularsum= normal_sum(a,size)+sum;
    return max(max_circularsum,normalsum);
}
/*
                //Method 1:Naive Approach
                //Time complexity:=O(n2)
                //Space complexity:=O(1)
int maxsum_circular(int* a,int size)
{
    int res=a[0];
    for(int i=0;i<size;i++)
    {
        int cur_max=a[i];
        int curr_sum=a[i];
        for(int j=1;j<size;j++)
       {
          int index=(i+j)%size;
          curr_sum+=a[index];
          cur_max=max(cur_max,curr_sum);
       }
       res=max(res,cur_max);
    }
    return res;
}*/
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
    cout << maxsum_circular(a, size);
    return 0;
}
