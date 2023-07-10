#include <bits/stdc++.h>
using namespace std;
int largest(int *a, int size)
{
    int large = a[0];
    for (int i = 1; i < size; i++)
    {
        large = max(large, a[i]);
    }
    return large;
}
int smallest(int *a, int size)
{
    int small = a[0];
    for (int i = 1; i < size; i++)
        small = min(small, a[i]);
    return small;
}
bool increasingrotatedarray(int *a, int size)
{
    int large = largest(a, size);
    int small = smallest(a, size);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == large)
        {
            if (a[i + 1] < a[i] && a[i + 1] == small)
            {
                if (a[0] > a[size - 1])
                {
                    return true;
                }
            }
        }
    }
    return false;
}
bool decreasingrotatedarray(int *a, int size)
{
    int large = largest(a, size);
    int small = smallest(a, size);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == large)
        {
            if (a[i - 1] < a[i] && a[i - 1] == small)
            {
                if (a[0] < a[size - 1])
                {
                    return true;
                }
            }
        }
    }
    return false;
}
bool increasing(int *a, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (a[i - 1] > a[i])
        {
            return false;
        }
    }
    return true;
}
bool decreasing(int *a, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (a[i - 1] < a[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a[] = {3,4,1,2};
    int size = sizeof(a) / sizeof(a[0]);
    if (increasing(a, size) || decreasing(a, size))
    {
        cout<<false<<endl;
    }
    else if (increasingrotatedarray(a, size) || decreasingrotatedarray(a, size))
    {
        cout<<true<<endl;
    }
    else
    {
        cout<<false<<endl;
    }
    return 0;
}
