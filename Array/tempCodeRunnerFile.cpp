int maxsum_circular(int* a,int size)
{
    int max_sum=a[0];
    int curr=a[0];
    for(int i=1;i<size;i++)
    {
        int index=i%size;
        curr=max(curr+a[index],a[index]);
        max_sum=max(max_sum,curr);
    }
    return max_sum;
}