#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n]={0};
    int n1=0,n2=0,n3=0;
    int d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        if(d==1)n2++;
        else if(d==2)n3++;
        else n1++;
    }

     for(int i=0;i<n;i++)cout<<a[i]<<" ";
     cout<<endl;
    for(int i=n1;i<n1+n2;i++)a[i]=1;
     for(int i=0;i<n;i++)cout<<a[i]<<" ";
     cout<<endl;
    for(int i=n1+n2;i<n;i++)a[i]=2;

    for(int i=0;i<n;i++)cout<<a[i]<<" ";


}
