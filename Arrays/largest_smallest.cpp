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

	int largest=INT_MIN;
	int smallest=INT_MAX;

	for(int i=0;i<n;i++)
	{
		largest=max(largest,a[i]);
		smallest=min(smallest,a[i]);
	}

	cout<<"Smallest element : "<<smallest<<endl;;
	cout<<"Largest  element : "<<largest;
	return 0;
}