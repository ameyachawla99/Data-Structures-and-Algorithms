#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a<b;
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

	sort(a,a+n,compare);
	

	for(int i=0;i<n;i++)cout<<a[i]<<"  ";
	return 0;
}