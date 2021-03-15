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

	int a[n]={1,2};

	for(int i=2;i<n;i++)cin>>a[i];

	for(int i=0;i<n;i++)cout<<a[i]<<"  ";

	cout<<endl;

	cout<<"Size of Array : "<<sizeof(a)/sizeof(int);
	return 0;
}