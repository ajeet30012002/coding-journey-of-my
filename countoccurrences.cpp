#include<bits/stdc++.h>
using namespace std;
int first(int a[],int size)
{
   // int reprat=0;
    bool b[*max_element(a,a+size)];
    memset(b,false,sizeof(b));
    for(int i=0;i<size;i++)
    {
        if(b[a[i]])
        {
            return a[i];
        }
        b[a[i]]=true;
    }
    
}
int main() {
    
   int arr[] = {10, 20, 20, 20, 40, 40}, n = 6;

   cout << first(arr, n);

	return 0;
}
 