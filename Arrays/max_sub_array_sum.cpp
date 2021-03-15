#include<iostream>

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
	int m=INT_MIN;
	int s[n];
	for(int i=0;i<n;i++)cin>>a[i];
		s[0]=a[0];
	for(int i=1;i<n;i++)s[i]=a[i]+s[i-1];
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			m=max(m,s[j]-s[i-1]);
		}

	cout<<m;
	return 0;
}