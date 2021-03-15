#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	

	int n;

	cin>>n;

	int a[n];

	for(int i=0;i<n;i++)cin>>a[i];

	for(int i=0;i<n-1;i++)
	{
		int s=INT_MAX;
		int k;
		for(int j=i;j<n;j++)
		{
			if(a[j]<s)
				{k=j;
				s=a[j];
				}	
		}
        
		swap(a[i],a[k]);
	}

	for(int i=0;i<n;i++)cout<<a[i]<<"  ";
	return 0;
}