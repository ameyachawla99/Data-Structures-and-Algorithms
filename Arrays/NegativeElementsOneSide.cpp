#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int i=0;
    int j=n-1;
    while(i<j)
    {
        while(a[i]<0)i++;
        while(a[j]>=0)j--;
        swap(a[i],a[j]);
    }
    swap(a[i],a[j]);
    for( i=0;i<n;i++)cout<<a[i]<<"  ";
}
