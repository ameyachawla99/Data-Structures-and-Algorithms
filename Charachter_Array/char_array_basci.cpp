#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	#endif

	char a[100];

	cin>>a;

	cout<<a<<endl;
	
	char b[]="abcde";

	cout<<sizeof(b)<<endl;
	char c[10]={"a"};
	cin>>c;
	cout<<c<<endl;

	char r[]={'a','b','\0'};

	cout<<r<<endl;
	cout<<sizeof(r)<<endl;
	return 0;
}