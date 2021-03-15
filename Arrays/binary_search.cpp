#include<iostream>

using namespace std;
int bs(int a[],int n,int key)
{
	int s=0;
	int e=n-1;
	int m;
	while(s<=e)
	{
		m=(s+e)/2;

		if(a[m] < key ) s=m+1;

		if(a[m] > key) e=m-1;

		if(a[m]==key)return m;

	}


	return -1;
}

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

	int key;
	
	cin>>key;

	cout<<bs(a,n,key);
	return 0;
}