#include<iostream>
#include<climits>
using namespace std;
bool compare(int a,int b)
{
	return a<b;
}
void bubblesort(int a[],int n,bool (&cmp)(int a,int b))
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
			if(cmp(a[j],a[j+1]))swap(a[j],a[j+1]);
	}
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

	bubblesort(a,n,compare);

	for(int i=0;i<n;i++)cout<<a[i]<<"  ";
	return 0;
}