#include<iostream>
#include<cstring>

using namespace std;

void reomove(char a[])
{   
	for(int i=0;a[i];i++)
	{
		if(a[i]==a[i+1])
		{
			for(int j=i;a[j];j++)a[j]=a[j+1];
			i--;
		}

	}
	}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	char a[100];
	cin>>a;

	reomove(a);

	cout<<a;
	return 0;
}