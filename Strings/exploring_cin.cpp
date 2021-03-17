#include <iostream>

using namespace std;

void readline(char a[],int m , char delim='\n')
{
	char ch=cin.get();
	int i=0;
	while(ch!=delim)
	{
		a[i++]=ch;
		if(i==m-1)break;
		ch=cin.get();
	}
    a[i]='\0';
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	char a[111];
	char b[111];
	readline(a,111,'$');
	cin.getline(b,111,'$');
	cout<<a<<endl<<b;
	return 0;
}