#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Pair
{
    int mini;
    int maxi;

};
struct Pair find(int a[],int i,int j)
{
    struct Pair c;

    if(i==j)
    {
        c.mini=a[i];
        c.maxi=a[i];
        return c;
    }

    if(i+1==j)
    {
        c.mini=min(a[i],a[j]);
        c.maxi=max(a[i],a[j]);
        return c;
    }

    else 
    {
        int m=(i+j)/2;
        struct Pair c1,c2;
        c1=find(a,i,m);
        c2=find(a,m+1,j);
        c.maxi=max(c1.maxi,c2.maxi);
        c.mini=min(c1.mini,c2.mini);
        return c;
    }


}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    int mini=INT_MAX;
    int maxi=INT_MIN;

    struct Pair c=find(a,0,n-1);
    cout<<c.mini<<"  "<<c.maxi;
}
