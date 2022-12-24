#include<stdio.h>
void swapno(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        a[i]+=1;
    }
}
int main()
{
    int size=5;
    int c[5]={0,1,2,3,4};
    //int arr[size] = {1, 2, 3, 4, 5};
    for(int i=0;i<size;i++)
    printf("%d\t",c[i]);
    printf("\n");
    swapno(c,size);
    for(int i=0;i<size;i++)
    printf("%d\t",c[i]);
return 0;
}