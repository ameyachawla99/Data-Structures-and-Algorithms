#include<iostream>
#include<climits>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	char a[100];
	char b[100];
	int m=0;

	while(n--)
	{
		cin>>a;
		if(strlen(a)>m)
		{
			m=strlen(a);
			strcpy(b,a);
		}

	}

	cout<<b;

	return 0;
}