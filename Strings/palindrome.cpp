#include<iostream>
#include<cstring>
using namespace std;
bool check(char a[])
{
	int l=strlen(a);
	for(int i=0;i<l/2;i++)if(a[i]!=a[l-1-i])return false;

	return true;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[100];

	cin>>a;

	cout<<check(a);

	return 0;
}