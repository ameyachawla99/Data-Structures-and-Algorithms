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

	int a[n];

	for(int i=0;i<n;i++)cin>>a[i];

	int key ;

	cin>>key;

	int i;
	for( i=0;i<n;i++)if(a[i]==key){
		cout<<"Key found at  Index "<<i;
		break;
	}
	if(i==n)cout<<"Key Not Found";
	return 0;
}