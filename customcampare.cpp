#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
    point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
};
int mycom(struct point x1,struct point x2)
{
    return x1.x-x2.x;
}
int main(){
point arr[]={
    {4,5},{3,10},{0,15}
};
sort(arr,arr+3,mycom);
for(int i=0;i<3;i++)
{
    cout<<arr[i].x<<" "<<arr[i].y<<"\n";
}
return 0;
}