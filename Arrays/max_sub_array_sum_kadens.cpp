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
	int cs=a[0],ms=a[0];
	
	for(int i=1;i<n;i++)
	{
		if(cs>=0)cs+=a[i];
		else cs=a[i];

		ms=max(cs,ms);

		//cout<<cs<<"  "<<ms<<endl; 
	}

	cout<<ms;
	return 0;
}