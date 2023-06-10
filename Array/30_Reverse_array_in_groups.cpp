#include <bits/stdc++.h>
using namespace std;
void reversearr(int *a, int low, int high)
{
    while (low <= high)
    {
        swap(a[low], a[high]);
        low++;
        high--;
    }
}
void groupreverse(int *a, int size, int k)
{
    if (k >= size)
    {
        reversearr(a, 0, size - 1);
    }
    else
    {
        int d = size / k;
        int p = 0;
        for (int i = 0; i < d; i++)
        {
            reversearr(a, p, p + k - 1);
            p = (i + 1) * k;
        }
        reversearr(a, p, size - 1);
    }
}
int main()
{
    int size;
    cout << "\nEnter the size of the arrays" << endl;
    cin >> size;
    int k;
    cout << "Enter the size of the groups " << endl;
    cin >> k;
    int a[size];
    cout << "\nEnter the elements of the arrays " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    groupreverse(a, size, k);
    cout << "The answer is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
