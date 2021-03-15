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
	for(int i=0;i<n;i++)cin>>a[i];
	
	int sum;
	cin>>sum;
	int i=0,j=n-1;

	while(i<j)
	{
		if(a[i]+a[j]==sum)
		{
			cout<<"Sum at i = "<<i<<" and j= "<<j;
			break;
		}
		if(a[i]+a[j]<sum)i++;
		else j--;
	}
	return 0;
}